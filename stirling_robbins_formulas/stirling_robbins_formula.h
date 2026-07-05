#ifndef MATH_HEADER_H
#define MATH_HEADER_H

#include <iostream>
#include <cmath>
#include <iomanip>

class stirling_robbins_formula {
    friend std::ostream &operator<<(std::ostream &os, const stirling_robbins_formula &obj);
public:
    stirling_robbins_formula() = default;

    static int factorial(int n);

    static double stirling_formula(int n);

    static double estimation_error(int n);

};

#endif //MATH_HEADER_H
