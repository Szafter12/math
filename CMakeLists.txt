cmake_minimum_required(VERSION 3.15)
project(math VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(math
        main.cpp
        stirling_robbins_formulas/stirling_robbins_formula.cpp
        stirling_robbins_formulas/stirling_robbins_formula.h)