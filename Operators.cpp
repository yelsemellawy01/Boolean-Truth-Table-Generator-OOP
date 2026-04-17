#include <iostream>
#include <string>
#include "Operators.h"
#include "AND.h"
#include "OR.h"
#include "NAND.h"
#include "XOR.h" 
#include "NOR.h"
#include "NOT.h"

//Parameterised constructor to create OPERATORS objects and define which other operator needs to be created based on the value of the operator that is being used in the input
Operators::Operators(int valueOfOperators) {
    this->valueOfOperators = valueOfOperators; 
    switch (valueOfOperators)
    {
    case 1:
        this->operatorObj = new AND();
        break;
    
    case 2:
        this->operatorObj = new OR();
        break;
    case 3:
        this->operatorObj = new NAND();
        break;
    case 4:
        this->operatorObj = new XOR();
        break;
    case 5:
        this->operatorObj = new NOR();
        break;
    case 6:
        this->operatorObj = new NOT();
        break;
    default:
        break;
    }
    
    
}
//No parameter constructor cus the other operator objects will have to create an OPERATORS object without a value and without a operator object ptr
Operators::Operators() {
    this->valueOfOperators = 0;
    this->operatorObj = nullptr; 
}

int Operators::getTruthTableValues(int a, int b) { 
    
    
    
    return NULL;
}