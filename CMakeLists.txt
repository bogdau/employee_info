cmake_minimum_required(VERSION 3.21)
project(employee_info)

set(CMAKE_CXX_STANDARD 20)

add_executable(employee_info
        src/main.cpp
        src/Employee.cpp
        src/Employee.h
        src/Program_runner.cpp
        src/Program_runner.h 
        src/Employee_info_filler.cpp 
        src/Employee_info_filler.h)
