#include <iostream>

#include "Figure.h"

void Figure::checkValid() {
    // Количество сторон равно 0
    m_valid = sides_count == 0;
}

void Figure::printInfo() {
    checkValid();

    printName();
    printValid();
    printSidesCount();
}

void Figure::printName() const {
    std::cout << name << ":" << std::endl;
}

void Figure::printValid() const {
    std::string result = m_valid ? "Правильная" : "Неправильная";

    std::cout << result << std::endl;
}

void Figure::printSidesCount() const {
    std::cout << "Количество сторон: " << sides_count << std::endl;
}
