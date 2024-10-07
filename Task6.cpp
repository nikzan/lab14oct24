#include <iostream>

int basePToDecimal(int X, int P) {
    int decimalValue = 0;
    int position = 0;

    while (X > 0) {
        int digit = X % 10;
        decimalValue += digit * std::pow(P, position);
        X /= 10;
        position++;
    }

    return decimalValue;
}

int main() {
    int X, P;

    std::cout << "Enter the number X: ";
    std::cin >> X;
    std::cout << "Enter the base P (2 ≤ P ≤ 9): ";
    std::cin >> P;

    if (P < 2 || P > 9) {
        std::cerr << "Base P must be between 2 and 9." << std::endl;
        return 1;
    }

    int decimalValue = basePToDecimal(X, P);
    std::cout << "The decimal representation of " << X << " in base " << P << " is: " << decimalValue << std::endl;

    return 0;
}