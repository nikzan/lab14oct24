#include <iostream>
#include <cmath>

double Exp1(double const x, double const epsilon) {
    double term = 1.0;
    double sum = term;
    int n = 1;

    while (std::abs(term) > epsilon) {
        term *= x / n;
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    double x;
    double epsilons[6];

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter six values of epsilon: ";
    for (double & epsilon : epsilons) {
        std::cin >> epsilon;
    }

    for (const double epsilon : epsilons) {
        const double result = Exp1(x, epsilon);
        std::cout << "exp(" << x << ") with epsilon " << epsilon << " is " << result << std::endl;
    }

    return 0;
}