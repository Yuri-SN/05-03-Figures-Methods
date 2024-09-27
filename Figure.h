#pragma once

#include <string>

class Figure {
public:
    Figure(unsigned int sides_count, std::string name)
        : sides_count{sides_count}, name{name} {}

    Figure() : Figure(0, "Фигрура") {}

    virtual void printInfo() const;
    void printName() const;
    virtual void printValid() const;
    void printSidesCount() const;

protected:
    unsigned int sides_count{};
    std::string name{};
    bool m_valid{false};
};
