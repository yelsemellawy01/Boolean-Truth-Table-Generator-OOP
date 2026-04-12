#ifndef NAND_H
#define NAND_H


#include <iostream>
#include <string>
#include "Operators.h"


class NAND : public Operators {
public:
    NAND();
    std::string getTruthTableValues() override;

};

#endif