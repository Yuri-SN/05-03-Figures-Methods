#pragma once

#include "../Triangle.h"

// Прямоугольный треугольник (угол C всегда равен 90)
class RightTriangle final : public Triangle {
public:
    RightTriangle(unsigned int lengthA, unsigned int lengthB, unsigned int lengthC,
          unsigned int angleA, unsigned int angleB)
        : Triangle("Прямоугольный треугольник", lengthA, lengthB, lengthC, angleA,
                   angleB, 90) {}
};
