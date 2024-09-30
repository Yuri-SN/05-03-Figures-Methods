#include <iostream>

#include "Figure.h"

bool Figure::isValid() {
    // Количество сторон равно 0
    return sides_count == 0;
}

void Figure::printInfo() {
    printName();
    printValid();
    printSidesCount();
}

void Figure::printName() {
    std::cout << name << ":" << std::endl;
}

void Figure::printValid() {
    std::string result = isValid() ? "Правильная" : "Неправильная";

    std::cout << result << std::endl;
}

void Figure::printSidesCount() {
    std::cout << "Количество сторон: " << sides_count << std::endl;
}
