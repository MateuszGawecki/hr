cmake_minimum_required(VERSION 3.0.0)

project(hr)

include_directories(./include ./src)

add_executable(output ./src/main.cpp ./src/hr.cpp ./src/employee.cpp)