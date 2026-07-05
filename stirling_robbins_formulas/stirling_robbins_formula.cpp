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

double stirling_robbins_formula::estimation_error(int n) {
    return std::abs(1.0 - (stirling_formula(n) / factorial(n))) * 100.0;
}

std::ostream &operator<<(std::ostream &os, const stirling_robbins_formula &obj) {
    os << std::setw(20) << std::right << "Stirling's Estimate" << std::setw(15) << std::right << "n!" << std::setw(20) << std::right << "Estimation error" << std::fixed << std::setprecision(4) << std::endl;

    for (int i {1}; i <= 10; ++i) {
        os << std::setw(20) << std::right << stirling_robbins_formula::stirling_formula(i) << std::setw(15) << std::right << stirling_robbins_formula::factorial(i) << std::setw(20) << std::right << stirling_robbins_formula::estimation_error(i) << "%" << std::endl;
    }

    return os;
}
