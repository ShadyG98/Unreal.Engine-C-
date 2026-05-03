#include <iostream>

int factorial(int number);

int main() {
    int n;
    std::cout << "Enter a number to calculate factorial: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << factorial(n) << "\n";
    return 0;
}

int factorial(int number) {
    if (number <= 1) {
        return 1;
    }
    return number * factorial(number - 1);
}
