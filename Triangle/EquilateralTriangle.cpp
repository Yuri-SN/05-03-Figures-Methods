#include "EquilateralTriangle.h"

bool EquilateralTriangle::isValid() {
    // количество сторон равно 3, сумма углов равна 180
    // все стороны равны, все углы равны 60

    return sides_count == 3 && isAnglesSum180() && m_lengthA == m_lengthB && m_lengthA == m_lengthC &&
           m_angleA == 60 && m_angleB == 60 && m_angleC == 60;
}
