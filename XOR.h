#ifndef XOR_H
#define XOR_H


#include <iostream>
#include <string>
#include "Operators.h"


class XOR : public Operators {
public:
    XOR();
    int getTruthTableValues(int a, int b) override;



};
#endif