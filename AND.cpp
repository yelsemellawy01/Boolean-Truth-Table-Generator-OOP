#include<iostream>
#include<string>
#include "AND.h"

AND::AND() : Operators() {
    
}

int AND::getTruthTableValues(int a, int b) {
    return a && b; 
}