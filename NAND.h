#ifndef NAND_H
#define NAND_H


#include <iostream>
#include <string>
#include "Operators.h"


class NAND : public Operators {
public:
    NAND();
    bool getTruthTableValues(int a, int b) override;

};

#endif