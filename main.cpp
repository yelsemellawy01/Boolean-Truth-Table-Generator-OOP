#include <iostream> 
#include <string> 
#include <vector>
#include "AND.h"
#include "OR.h"
#include "NAND.h"
#include "XOR.h"
#include "NOR.h"
#include "NOT.h"
#include "Operators.h"



int main(){
std::string input; 
std::vector<std::string> tokens; //Vector to store tokenised input string 
std::getline(std::cin, input); //Had to use getline as cin stops at whitespaces (spacebars) 
std::string inputCopy = input; //Copy of the input string to be used for finding the operators in the input string, as the original input string will be modified to remove the operators from it and find the variables in it
int pos; 
// Variables will be used to determine if the input has 2 or 3 variables 
bool hasA = false;
bool hasB = false;
bool hasC = false;
while ((pos = inputCopy.find(" ")) != std::string::npos) { //Tokenise the input string by finding the spaces in it and using them to separate the variables and operators in the input 
    tokens.push_back(input.substr(0, pos)); 
    inputCopy.erase(0, pos + 1); //Remove the tokenised part of the input string to find the next token in the next loop
}
for(int i = 0; i < tokens.size(); i++){
    if (tokens[i].front() == '('){ //Remove the brackets from the variables in the input string to not cause problems with finding the operators in the string
        tokens[i] = tokens[i].substr(1); 
    }
    if(tokens[i].back() == ')'){
        tokens[i] = tokens[i].substr(0, tokens[i].size() - 1);
    }
}
//Checks for variables in the tokenized input string 
for(int i = 0; i < tokens.size(); i++){
    if(tokens[i] == "A"){
        hasA = true; 

    }
    if(tokens[i] == "B"){
        hasB = true; 

    }
    if(tokens[i] == "C"){
        hasC = true; 

    }
}


//Get index of the boolean ops in the string, if its not found, will return std::string npos and can cancel out easy
int NAND_Location = input.find("NAND"); 
if(NAND_Location != std::string::npos){ 
    inputCopy.replace(NAND_Location, 4, ""); //Remove the nand operator from the input string to not overlap with the AND operator
}
int XOR_Location = input.find("XOR"); 
if(XOR_Location != std::string::npos){ 
    inputCopy.replace(XOR_Location, 3, ""); //Remove the xor operator from the input string to not overlap with the OR operator 
}
int NOR_Location = input.find("NOR");
if(NOR_Location != std::string::npos){ 
    inputCopy.replace(NOR_Location, 3, ""); //Remove the nor operator from the input string to not overlap with the OR operator
}
int NOT_Location = input.find("NOT");
int AND_Location = input.find("AND"); 
int OR_Location = input.find("OR");

//Checks to find out which operators are in the input and displays what they mean/do to the user and creates operator object
std::cout << "What the operators actually mean: " << std::endl; 
if(AND_Location != std::string::npos){ 
    std::cout << "AND: True only if both inputs are true." << std::endl; 
    Operators andObj(1);
} 
if(OR_Location != std::string::npos){
    std::cout << "OR: True when 1 or more inputs are true." << std::endl;
        Operators orObj(2);
}
if(NAND_Location != std::string::npos){ 
    std::cout << "NAND: False only if both inputs are true." << std::endl;
        Operators nandObj(3);
}
if(XOR_Location != std::string::npos){ 
    std::cout << "XOR: True when only 1 input is true." << std::endl;
        Operators xorObj(4);
}
if(NOR_Location != std::string::npos){ 
    std::cout << "NOR: False when 1 or more inputs are true." << std::endl;
        Operators norObj(5);
}
if(NOT_Location != std::string::npos){ 
    std::cout << "NOT: Inverts the input." << std::endl;
        Operators notObj(6);
}

std::cout << hasA && hasB && hasC; //Test to see if the variables are being detected 
if(hasA && hasB && hasC){
    for(int a = 0; a <= 1; a++){
        for (int b = 0; b <= 1; b++){
            for(int c = 0; c <= 1; c++){
                int currentResult; 
                if(tokens[0] == "A"){
                    currentResult = a; 
                }
                else if(tokens[0] == "B"){
                    currentResult = b; 
                }
                else if(tokens[0] == "C"){
                    currentResult = c; 
                }
                for(int i = 1; i < tokens.size(); i++){
                    int operand;
                    if(tokens[i] == "AND"){ 
                        if(tokens[i + 1] == "A"){
                            operand = a; 
                        }
                        else if(tokens[i + 1] == "B"){
                            operand = b; 
                        }
                        else if(tokens[i + 1] == "C"){
                            operand = c; 
                        }
                        currentResult = AND().getTruthTableValues(currentResult, operand);
                    }
                    else if(tokens[i] == "OR"){
                        if(tokens[i + 1] == "A"){
                            operand = a; 
                        }
                        else if(tokens[i + 1] == "B"){
                            operand = b; 
                        }
                        else if(tokens[i + 1] == "C"){
                            operand = c; 
                        }
                        currentResult = OR().getTruthTableValues(currentResult, operand);
                    }
                    else if(tokens[i] == "NAND"){
                        if(tokens[i + 1] == "A"){
                            operand = a; 
                        }
                        else if(tokens[i + 1] == "B"){
                            operand = b; 
                        }
                        else if(tokens[i + 1] == "C"){
                            operand = c; 
                        }
                        currentResult = NAND().getTruthTableValues(currentResult, operand);
                    }
                    else if(tokens[i] == "XOR"){
                        if(tokens[i + 1] == "A"){
                            operand = a; 
                        }
                        else if(tokens[i + 1] == "B"){
                            operand = b; 
                        }
                        else if(tokens[i + 1] == "C"){
                            operand = c; 
                        }
                        currentResult = XOR().getTruthTableValues(currentResult, operand);
                    }
                    else if(tokens[i] == "NOR"){
                        if(tokens[i + 1] == "A"){
                            operand = a; 
                        }
                        else if(tokens[i + 1] == "B"){
                            operand = b; 
                        }
                        else if(tokens[i + 1] == "C"){
                            operand = c; 
                        }
                        currentResult = NOR().getTruthTableValues(currentResult, operand);
                    }
                    else if(tokens[i] == "NOT"){
                        //dont know how to do NOT operator yet, have to somehow get it to store in another variable that then can be used 
                }
            }
        }
    }
}

}
}
