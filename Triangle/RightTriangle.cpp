#include "RightTriangle.h"

void RightTriangle::checkValid() {
    // Стороны и углы произвольные, количество сторон равно 3,
    // сумма углов равна 180
    // угол C всегда равен 90

    m_valid = ((sides_count == 3) && (m_angleA + m_angleB + m_angleC == 180) && (m_angleC == 90));
}
