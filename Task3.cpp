#include <iostream>
#include <cmath>

double Exp1(double x, double epsilon) {
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
    for (int i = 0; i < 6; ++i) {
        std::cin >> epsilons[i];
    }

    for (int i = 0; i < 6; ++i) {
        double result = Exp1(x, epsilons[i]);
        std::cout << "exp(" << x << ") with epsilon " << epsilons[i] << " is " << result << std::endl;
    }

    return 0;
}