#include<iostream>
#include<string>
#include "XOR.h"

XOR::XOR() : Operators() {
    
}
int XOR::getTruthTableValues(int a, int b) {
    return (a || b) && !(a && b); //Definition of XOR
}