#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>

double square(double x) {
    return x * x;
}

double forward_difference(double x, double h) {
    // TODO: Replace this body with some forward-difference calculation.
   return (square(x + h) - square(x)) / h;
}

int main() {
    const double x = 2.0;
    const double exact_derivative = 4.0;
    const double step_sizes[] = {0.1, 0.01, 0.001};

    std::cout << std::setprecision(10);
    std::cout << "h,estimate,absolute_error\n";

    for (double h : step_sizes) {
        const double estimate = forward_difference(x, h);
        if (std::isnan(estimate)) {
            std::cerr << "TODO: Implement forward_difference in main.cpp, then rebuild.\n";
            return 1;
        }

        const double absolute_error = std::abs(estimate - exact_derivative);
        std::cout << h << ',' << estimate << ',' << absolute_error << '\n';
    }

    return 0;
}
