#include<iostream>
#include<string>
#include "NOR.h"

NOR::NOR() : Operators() {
    
}

int NOR::getTruthTableValues(int a, int b) {
    return !(a || b); 
}