#include <iostream>

int main() {
    int number = 2;
    int* ptr_memory;
    ptr_memory = &number;

    std::cout << "Value: " << *ptr_memory << "\n";
    std::cout << "Memory address: " << ptr_memory << "\n";

    return 0;
}
