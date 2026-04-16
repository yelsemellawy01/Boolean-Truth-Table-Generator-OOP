#include<iostream>
#include<string>
#include "OR.h"

OR::OR() : Operators() {
    
}
bool OR::getTruthTableValues(int a, int b) {
    return a || b; 
}