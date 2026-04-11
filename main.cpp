#include <iostream> 
#include <string> 
#include "Operators.h"



int main(){ 

std::string input; 
std::getline(std::cin, input); //Had to use getline as cin stops at whitespaces (spacebars) 


//Get index of the boolean ops in the string, if its not found, will return std::string npos and can cancel out easy
int AND_Location = input.find("AND"); 
int OR_Location = input.find("OR");
int NAND_Location = input.find("NAND"); 
int XOR_Location = input.find("XOR"); 
int NOR_Location = input.find("NOR");
int NOT_Location = input.find("NOT");



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


if(AND_Location == std::string::npos && OR_Location == std::string::npos && NAND_Location == std::string::npos && XOR_Location == std::string::npos && NOR_Location == std::string::npos && NOT_Location == std::string::npos){ 
    std::cout << "No boolean operators found in the input." << std::endl; 
}
else{ 
    std::cout << "Boolean operators found in the input." << std::endl; 
}
}