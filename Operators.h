#ifndef OPERATORS_H
#define OPERATORS_H

#include <iostream>
#include <string>


class Operators {
    private: 
    int valueOfOperators; //This is going to be used to determine which operator is being used in the input and then will be used to create objects of the operator and call their functions to generate the truth table
    Operators* operatorObj; //This is going to be used to create an object of the operator that is being used in the input and then call its functions to generate the truth table values



    public:
    Operators(int valueOfOperators); //Parameterised constructor to create an operator object with the value of the operator that is being used in the input
    Operators();
    virtual bool getTruthTableValues(int a, int b); //Function to generate the truth table values for the operator that is being used in the input and return it as a string to be printed to the user


};

#endif