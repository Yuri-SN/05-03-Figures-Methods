#pragma once

#include "Rectangle.h"

// Квадрат (все стороны равны, все углы равны 90)
class Square final : public Rectangle {
public:
    Square(unsigned int lengthABCD)
        : Rectangle("Квадрат", lengthABCD, lengthABCD) {}
};
