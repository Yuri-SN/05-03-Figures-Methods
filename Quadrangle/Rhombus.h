#pragma once

#include "Parallelogram.h"

// Ромб (все стороны равны, углы A,C и B,D попарно равны)
class Rhombus final : public Parallelogram {
public:
    Rhombus(unsigned int lengthABCD, unsigned int angleAC, unsigned int angleBD)
        : Parallelogram("Ромб", lengthABCD, lengthABCD, angleAC, angleBD) {}

    virtual bool isValid() override;
};
