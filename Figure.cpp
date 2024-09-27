#include <iostream>

#include "Figure.h"

void Figure::printInfo() const {
    printName();
    printValid();
    printSidesCount();
}

void Figure::printName() const {
    std::cout << name << ":" << std::endl;
}

void Figure::printValid() const {
    std::string result = (sides_count == 0 && name == "Фигрура") ? "Правильная" : "Неправильная";

    std::cout << result << std::endl;
}

void Figure::printSidesCount() const {
    std::cout << "Количество сторон: " << sides_count << std::endl;
}
