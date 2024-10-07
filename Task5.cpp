#include <iostream>
#include <cstdlib>
#include <cmath>

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int A, B;
    std::cout << "Enter the range [A, B]: ";
    std::cin >> A >> B;

    int* palindromicSquares = new int[B - A + 1]; // initialize dynamic array with the maximum possible size
    int count = 0;

    for (int i = A; i <= B; ++i) {
        int square = i * i;
        if (isPalindrome(square)) {
            palindromicSquares[count++] = i;
        }
    }

    if (count == 0) {
        std::cout << "No solution" << std::endl;
    } else {
        std::cout << "Numbers whose squares are palindromes: ";
        for (int i = 0; i < count; ++i) {
            std::cout << palindromicSquares[i] << " ";
        }
        std::cout << std::endl;
    }

    delete[] palindromicSquares; // free memory
    return 0;
}