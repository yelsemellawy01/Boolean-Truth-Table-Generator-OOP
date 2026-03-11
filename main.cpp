#include <iostream> 
#include <string> 



int main(){ 

std::string input; 
std::getline(std::cin, input); //Had to use getline as cin stops at whitespaces (spacebars) 


//Get index of the boolean ops in the string, if its not found, will return std::string npos and can cancel out easy
int AND_Location = input.find("AND"); 
int OR_Location = input.find("OR");
int NAND_Location = input.find("NAND"); 
int XOR_Location = input.find("XOR"); 
int NOR_Location = input.find("NOR");



}