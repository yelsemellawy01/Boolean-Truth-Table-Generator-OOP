#include <iostream>
#include <string>
#include "Operators.h"
#include "AND.h"
#include "OR.h"
#include "NAND.h"
#include "XOR.h" 
#include "NOR.h"
#include "NOT.h"


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
Operators::Operators() {
    this->operatorObj = nullptr;
}

std::string Operators::getTruthTableValues() { 
    return NULL;
}