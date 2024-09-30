#pragma once

#include "../Triangle.h"

// Равносторонний треугольник (все стороны равны, все углы равны 60)
class EquilateralTriangle final : public Triangle {
public:
    EquilateralTriangle(unsigned int length)
        : Triangle("Равносторонний треугольник", length, length, length, 60, 60,
                   60) {}

    virtual bool isValid() override;
};
