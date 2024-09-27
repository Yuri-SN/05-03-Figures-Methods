#pragma once

#include "Figure.h"

class Quadrangle : public Figure {
public:
    Quadrangle(std::string figureName, unsigned int lengthA, unsigned int lengthB,
               unsigned int lengthC, unsigned int lengthD, unsigned int angleA,
               unsigned int angleB, unsigned int angleC, unsigned int angleD);

    Quadrangle(unsigned int lengthA, unsigned int lengthB, unsigned int lengthC,
               unsigned int lengthD, unsigned int angleA, unsigned int angleB,
               unsigned int angleC, unsigned int angleD)
        : Quadrangle("Четырёхугольник", lengthA, lengthB, lengthC, lengthD,
                     angleA, angleB, angleC, angleD) {}

    void printLengths() const override;
    void printAngles() const override;

private:
    unsigned int m_lengthA{};
    unsigned int m_lengthB{};
    unsigned int m_lengthC{};
    unsigned int m_lengthD{};

    unsigned int m_angleA{};
    unsigned int m_angleB{};
    unsigned int m_angleC{};
    unsigned int m_angleD{};
};
