cmake_minimum_required(VERSION 3.16)
project(Project_Vecrors)

set(CMAKE_CXX_STANDARD 20)

add_executable(Project_Vecrors main.cpp Element.cpp Element.h Point.cpp Point.h Vector.cpp Vector.h VectorLengthException.cpp VectorLengthException.h Triangle.cpp Triangle.h Line.cpp Line.h)