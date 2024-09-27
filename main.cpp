#include <iostream>

#include "Figure.h"
// #include "Quadrangle.h"
// #include "Quadrangle/Parallelogram.h"
// #include "Quadrangle/Rectangle.h"
// #include "Quadrangle/Rhombus.h"
// #include "Quadrangle/Square.h"
// #include "Triangle.h"
// #include "Triangle/EquilateralTriangle.h"
// #include "Triangle/IsoscelesTriangle.h"
// #include "Triangle/RightTriangle.h"

void print_info(Figure &figure) {
    figure.printInfo();
    // figure.printName();
    // figure.printValid();
    // figure.printSidesCount();
    // figure.printLengths();
    // figure.printAngles();

    std::cout << std::endl;
}

int main() {
    Figure figure{};
    print_info(figure);

    // // Треугольник
    // Triangle t{10, 20, 30, 50, 60, 70};
    // print_info(t);

    // // Прямоугольный треугольник
    // RightTriangle rt{10, 20, 30, 50, 60};
    // print_info(rt);

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
