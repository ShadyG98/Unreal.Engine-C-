#include <iostream>
#include <string>

int main() {
    char programmer[] = "programmer";
    char name[20];

    std::cout << programmer << "\n";
    std::cout << "Size of array: " << sizeof(programmer) << " bytes\n";
    std::cout << "Enter your name: ";
    std::cin.getline(name, sizeof(name));
    std::cout << "Hello, " << name << "!\n";

    return 0;
}
