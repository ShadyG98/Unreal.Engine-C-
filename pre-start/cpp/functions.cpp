#include <iostream>

int sum(int a, int b);

int main() {
    int result, valueA, valueB;

    std::cout << "Enter value for a: ";
    std::cin >> valueA;
    std::cout << "Enter value for b: ";
    std::cin >> valueB;

    result = sum(valueA, valueB);
    std::cout << "Result: " << result << "\n";

    return 0;
}

int sum(int valA, int valB) {
    return valA + valB;
}
