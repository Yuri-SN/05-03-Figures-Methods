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

    bool isAnglesSum360();

    virtual bool isValid() override;

    virtual void printInfo() override;
    virtual void printLengths() const;
    virtual void printAngles() const;

protected:
    unsigned int m_lengthA{};
    unsigned int m_lengthB{};
    unsigned int m_lengthC{};
    unsigned int m_lengthD{};

    unsigned int m_angleA{};
    unsigned int m_angleB{};
    unsigned int m_angleC{};
    unsigned int m_angleD{};
};
