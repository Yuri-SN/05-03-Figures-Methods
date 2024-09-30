#pragma once

#include "Parallelogram.h"

// Прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)
class Rectangle : public Parallelogram {
public:
    Rectangle(std::string figureName, unsigned int lengthAC, unsigned int lengthBD)
        : Parallelogram(figureName, lengthAC, lengthBD, 90, 90) {}

    Rectangle(unsigned int lengthAC, unsigned int lengthBD)
        : Rectangle("Прямоугольник", lengthAC, lengthBD) {}

    virtual bool isValid() override;
};
