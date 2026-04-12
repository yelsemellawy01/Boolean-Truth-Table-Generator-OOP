#ifndef AND_H
#define AND_H

#include <iostream>
#include <string>
#include "Operators.h"




class AND : public Operators {
public:
    AND();
    std::string getTruthTableValues() override;

};

#endif