#pragma once

#include "../Triangle.h"

// Равнобедренный треугольник (стороны a и c равны, углы A и C равны)
class IsoscelesTriangle final : public Triangle {
public:
    IsoscelesTriangle(unsigned int lengthAC, unsigned int lengthB,
                      unsigned int angleAC, unsigned int angleB)
        : Triangle("Равнобедренный треугольник", lengthAC, lengthB, lengthAC,
                   angleAC, angleB, angleAC) {}

    virtual bool isValid() override;
};
