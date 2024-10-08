#include <iostream>
#include <fstream>
#include <cmath>
#include <limits>

// Function to calculate the length of a segment
double Length(const double x1, const double y1, const double x2, double const y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    std::ifstream inputFile("/Users/nikzan/CLionProjects/lab14oct24/a.otr");
    if (!inputFile) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    int N;
    inputFile >> N;

    double maxLength = std::numeric_limits<double>::min(); // smallest possible value

    for (int i = 0; i < N; ++i) {
        double x1, y1, x2, y2;
        inputFile >> x1 >> y1 >> x2 >> y2;
        if (const double length = Length(x1, y1, x2, y2); length > maxLength) {
            maxLength = length;
        }
    }

    inputFile.close();

    std::cout << "The longest segment length is: " << maxLength << std::endl;

    return 0;
}
