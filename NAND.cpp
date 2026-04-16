#include<iostream>
#include<string>
#include "NAND.h"

NAND::NAND() : Operators() {
    
}

bool NAND::getTruthTableValues(int a, int b) {
    return !(a && b); 
}