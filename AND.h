#ifndef AND_H
#define AND_H

#include <iostream>
#include <string>
#include "Operators.h"




class AND : public Operators {
public:
    AND();
    int getTruthTableValues(int a, int b) override;

};

#endif