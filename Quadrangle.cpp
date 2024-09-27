#include <iostream>

#include "Quadrangle.h"

Quadrangle::Quadrangle(std::string figureName, unsigned int lengthA,
                       unsigned int lengthB, unsigned int lengthC,
                       unsigned int lengthD, unsigned int angleA,
                       unsigned int angleB, unsigned int angleC,
                       unsigned int angleD)
    : Figure(4, figureName) {

    m_lengthA = lengthA;
    m_lengthB = lengthB;
    m_lengthC = lengthC;
    m_lengthD = lengthD;

    m_angleA = angleA;
    m_angleB = angleB;
    m_angleC = angleC;
    m_angleD = angleD;
}

void Quadrangle::printLengths() const {
    std::cout << "Стороны: a=" << m_lengthA << " b=" << m_lengthB
              << " c=" << m_lengthC << " d=" << m_lengthD << std::endl;
}

void Quadrangle::printAngles() const {
    std::cout << "Углы: A=" << m_angleA << " B=" << m_angleB << " C=" << m_angleC
              << " D=" << m_angleD << std::endl;
}
