cmake_minimum_required(VERSION 3.16)

project(05-03-Figures-Methods LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(05-03-Figures-Methods main.cpp)

include(GNUInstallDirs)
install(TARGETS 05-03-Figures-Methods
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
