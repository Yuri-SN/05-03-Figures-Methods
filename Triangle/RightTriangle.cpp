#include "RightTriangle.h"

bool RightTriangle::isValid() {
    // количество сторон равно 3, сумма углов равна 180
    // угол C всегда равен 90

    return sides_count == 3 && isAnglesSum180() && m_angleC == 90;
}
