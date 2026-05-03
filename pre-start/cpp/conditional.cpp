#include <iostream>

int main() {
    int inputNumber, targetNumber = 5;

    std::cout << "Enter a number: ";
    std::cin >> inputNumber;

    if (inputNumber == targetNumber) {
        std::cout << "Correct!\n";
    } else {
        std::cout << "Try again\n";
    }

    return 0;
}
