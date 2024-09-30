#include "IsoscelesTriangle.h"

bool IsoscelesTriangle::isValid() {
    // количество сторон равно 3, сумма углов равна 180
    // стороны a и c равны, углы A и C равны

    return sides_count == 3 && isAnglesSum180() && (m_lengthA == m_lengthC) && (m_angleA == m_angleC);
}
