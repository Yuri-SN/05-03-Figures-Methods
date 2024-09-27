#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "Triangle/RightTriangle.h"

void print_info(Figure &figure) {
    figure.printInfo();

    std::cout << std::endl;
}

int main() {
    Figure figure{};
    print_info(figure);

    // Треугольник
    Triangle triangle{10, 20, 30, 50, 60, 70};
    print_info(triangle);

    // Прямоугольный треугольник
    RightTriangle rt{10, 20, 30, 50, 60};
    print_info(rt);

    // Прямоугольный треугольник
    RightTriangle rt2{10, 20, 30, 50, 40};
    print_info(rt2);

    // // Равнобедренный треугольник
    // IsoscelesTriangle it{10, 20, 50, 60};
    // print_info(it);

    // // Равносторонний треугольник
    // EquilateralTriangle et{30};
    // print_info(et);

    // // Четырёхугольник
    // Quadrangle q{10, 20, 30, 40, 50, 60, 70, 80};
    // print_info(q);

    // // Прямоугольник
    // Rectangle r{10, 20};
    // print_info(r);

    // // Квадрат
    // Square s{20};
    // print_info(s);

    // // Параллелограмм
    // Parallelogram p{20, 30, 30, 40};
    // print_info(p);

    // // Ромб
    // Rhombus rm{30, 30, 40};
    // print_info(rm);

    return 0;
}
