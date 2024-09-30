#include "Parallelogram.h"

bool Parallelogram::isValid() {
    // количество сторон равно 4, сумма углов равна 360
    // стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны

    return sides_count == 4 && isAnglesSum360() && m_lengthA == m_lengthC &&
           m_lengthB == m_lengthD && m_angleA == m_angleC && m_angleB == m_angleD;
}
