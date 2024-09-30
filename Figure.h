#pragma once

#include <string>

class Figure {
public:
    Figure(unsigned int sides_count, std::string name)
        : sides_count{sides_count}, name{name} {}

    Figure() : Figure(0, "Фигрура") {}

    virtual bool isValid();

    virtual void printInfo();

    void printName();
    void printValid();
    void printSidesCount();

protected:
    std::string name{};
    unsigned int sides_count{};
};
