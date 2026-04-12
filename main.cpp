#include <iostream> 
#include <string> 
#include "Operators.h"



int main(){ 

std::string input; 
std::getline(std::cin, input); //Had to use getline as cin stops at whitespaces (spacebars) 
std::string inputCopy = input; //Copy of the input string to be used for finding the operators in the input string, as the original input string will be modified to remove the operators from it and find the variables in it

//Get index of the boolean ops in the string, if its not found, will return std::string npos and can cancel out easy
int NAND_Location = inputCopy.find("NAND"); 
if(NAND_Location != std::string::npos){ 
    inputCopy.replace(NAND_Location, 4, ""); //Remove the nand operator from the input string to not overlap with the AND operator
}
int XOR_Location = inputCopy.find("XOR"); 
if(XOR_Location != std::string::npos){ 
    inputCopy.replace(XOR_Location, 3, ""); //Remove the xor operator from the input string to not overlap with the OR operator 
}
int NOR_Location = inputCopy.find("NOR");
if(NOR_Location != std::string::npos){ 
    inputCopy.replace(NOR_Location, 3, ""); //Remove the nor operator from the input string to not overlap with the OR operator
}
int NOT_Location = inputCopy.find("NOT");
int AND_Location = inputCopy.find("AND"); 
int OR_Location = inputCopy.find("OR");

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



}