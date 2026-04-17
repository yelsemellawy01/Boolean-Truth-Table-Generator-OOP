#include<iostream>
#include<string>
#include "NOT.h"

NOT::NOT() : Operators() {
    
}
int NOT::getInverse(int a) {
    return !a; 
}