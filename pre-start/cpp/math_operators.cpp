#include <iostream>
#include <iomanip>

int main() {
    double num1, num2, sum, difference, product, quotient;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num2 != 0 ? num1 / num2 : 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    std::cout << "Quotient: " << quotient << "\n";

    return 0;
}
