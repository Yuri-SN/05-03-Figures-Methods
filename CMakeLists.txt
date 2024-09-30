cmake_minimum_required(VERSION 3.16)

project(05-03-Figures-Methods LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(05-03-Figures-Methods
    main.cpp
    Figure.h
    Figure.cpp
    Triangle.h
    Triangle.cpp
    Triangle/RightTriangle.h
    Triangle/RightTriangle.cpp
    Triangle/IsoscelesTriangle.h
    Triangle/IsoscelesTriangle.cpp
    Triangle/EquilateralTriangle.h
    Triangle/EquilateralTriangle.cpp
    Quadrangle.h
    Quadrangle.cpp
    Quadrangle/Rectangle.h
    Quadrangle/Rectangle.cpp
    Quadrangle/Square.h
    Quadrangle/Square.cpp
    Quadrangle/Parallelogram.h
    Quadrangle/Parallelogram.cpp
    Quadrangle/Rhombus.h
    Quadrangle/Rhombus.cpp
)

include(GNUInstallDirs)

install(TARGETS 05-03-Figures-Methods
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
