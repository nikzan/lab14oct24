#include <iostream>

int Sign(double X) {
    if (X < 0) {
        return -1;
    } else if (X == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    double A, B;
    std::cout << "Enter value for A: ";
    std::cin >> A;
    std::cout << "Enter value for B: ";
    std::cin >> B;

    int result = Sign(A) + Sign(B);
    std::cout << "Sign(A) + Sign(B) = " << result << std::endl;

    return 0;
}