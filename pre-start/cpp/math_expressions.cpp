#include <iostream>
#include <cmath>

int main() {
    double x, y, result;

    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;

    // sqrt(x) / (x^2 - 1)
    result = sqrt(x) / (pow(x, 2) - 1);

    std::cout << "Result: " << result << "\n";

    return 0;
}
