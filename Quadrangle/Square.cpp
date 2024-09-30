#include "Square.h"

bool Square::isValid() {
    // количество сторон равно 4, сумма углов равна 360
    // все стороны равны, все углы равны 90

    return sides_count == 4 && isAnglesSum360() && m_lengthA == m_lengthB &&
           m_lengthA == m_lengthC && m_angleA == 90 && m_angleB == 90 &&
           m_angleC == 90 && m_angleD == 90;
}
