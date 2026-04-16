#include<iostream>
#include<string>
#include "NOR.h"

NOR::NOR() : Operators() {
    
}

bool NOR::getTruthTableValues(int a, int b) {
    return !(a || b); 
}