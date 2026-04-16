#include<iostream>
#include<string>
#include "AND.h"

AND::AND() : Operators() {
    
}

bool AND::getTruthTableValues(int a, int b) {
    return a && b; 
}