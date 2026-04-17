#include<iostream>
#include<string>
#include "NAND.h"

NAND::NAND() : Operators() {
    
}

int NAND::getTruthTableValues(int a, int b) {
    return !(a && b); 
}