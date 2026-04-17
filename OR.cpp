#include<iostream>
#include<string>
#include "OR.h"

OR::OR() : Operators() {
    
}
int OR::getTruthTableValues(int a, int b) {
    return a || b; 
}