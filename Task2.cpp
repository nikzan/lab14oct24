#include <iostream>

void PowerA3(double A, double &B) {  // using &B to avoid return statement in procedure
    B = A * A * A;
}

int main() {
    double numbers[5];
    double results[5];

    std::cout << "Enter five numbers: ";
    for (double & number : numbers) {
        std::cin >> number;
    }

    for (int i = 0; i < 5; ++i) {
        PowerA3(numbers[i], results[i]);
    }

    std::cout << "The cubes of the entered numbers are: ";
    for (double const result : results) {
        std::cout << result << " ";
    }
    std::cout << std::endl;

    return 0;
}