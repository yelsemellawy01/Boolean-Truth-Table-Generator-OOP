#ifndef NOT_H
#define NOT_H

#include <iostream>
#include <string>
#include "Operators.h" 


class NOT : public Operators {
public:
    NOT();
    bool getInverse(int a); //Function to generate the truth table values for NOT operator 


};
#endif