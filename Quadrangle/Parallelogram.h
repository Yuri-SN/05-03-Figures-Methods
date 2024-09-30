#pragma once

#include "../Quadrangle.h"

// Параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно
// равны)
class Parallelogram : public Quadrangle {
public:
    Parallelogram(std::string figureName, unsigned int lengthAC,
                  unsigned int lengthBD, unsigned int angleAC,
                  unsigned int angleBD)
        : Quadrangle(figureName, lengthAC, lengthBD, lengthAC, lengthBD, angleAC,
                     angleBD, angleAC, angleBD) {}

    Parallelogram(unsigned int lengthAC, unsigned int lengthBD,
                  unsigned int angleAC, unsigned int angleBD)
        : Parallelogram("Параллелограмм", lengthAC, lengthBD, angleAC, angleBD) {}

    virtual bool isValid() override;
};
