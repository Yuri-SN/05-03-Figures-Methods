#include "Rectangle.h"

bool Rectangle::isValid() {
    // количество сторон равно 4, сумма углов равна 360
    // стороны a,c и b,d попарно равны, все углы равны 90

    return sides_count == 4 && isAnglesSum360() && m_lengthA == m_lengthC &&
           m_lengthB == m_lengthD && m_angleA == 90 && m_angleB == 90 &&
           m_angleC == 90 && m_angleD == 90;
}
