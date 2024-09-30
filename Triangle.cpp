#include <iostream>

#include "Triangle.h"

Triangle::Triangle(std::string figureName, unsigned int lengthA,
                   unsigned int lengthB, unsigned int lengthC,
                   unsigned int angleA, unsigned int angleB,
                   unsigned int angleC)
    : Figure(3, figureName) {

    m_lengthA = lengthA;
    m_lengthB = lengthB;
    m_lengthC = lengthC;

    m_angleA = angleA;
    m_angleB = angleB;
    m_angleC = angleC;
}

bool Triangle::isAnglesSum180() {
    return m_angleA + m_angleB + m_angleC == 180;
}

bool Triangle::isValid() {
    // Стороны и углы произвольные, количество сторон равно 3,
    // сумма углов равна 180

    return sides_count == 3 && isAnglesSum180();
}

void Triangle::printInfo() {
    printName();
    printValid();
    printSidesCount();
    printLengths();
    printAngles();
}

void Triangle::printLengths() const {
    std::cout << "Стороны: a=" << m_lengthA << " b=" << m_lengthB << " c=" << m_lengthC << std::endl;
}

void Triangle::printAngles() const {
    std::cout << "Углы: A=" << m_angleA << " B=" << m_angleB << " C=" << m_angleC << std::endl;
}
