#include<iostream>
#include<string>
#include "NOT.h"

NOT::NOT() : Operators() {
    
}
bool NOT::getInverse(int a) {
    return !a; 
}