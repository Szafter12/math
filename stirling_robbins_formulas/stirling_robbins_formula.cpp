#include "stirling_robbins_formula.h"

int stirling_robbins_formula::factorial(int n) {
    int result = 1;
    for (int i = n; i > 1; --i) {
        result *= i;
    }
    return result;
}

double stirling_robbins_formula::stirling_formula(int n) {
    return std::pow(n, n) * std::pow(M_E, -n) * std::sqrt(2 * M_PI * n);
}

std::ostream &operator<<(std::ostream &os, const stirling_robbins_formula &obj) {
    os << std::setw(20) << std::right << "Stirling's Estimate" << std::setw(10) << std::right << "n!" << std::endl;

    for (int i {1}; i <= 10; ++i) {
        os << std::setw(20) << std::right << stirling_robbins_formula::stirling_formula(i) << std::setw(10) << std::right << std::fixed << std::setprecision(1) << stirling_robbins_formula::factorial(i) << std::endl;
    }

    return os;
}
