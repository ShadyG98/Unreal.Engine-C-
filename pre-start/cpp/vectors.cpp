#include <iostream>

int main() {
    int array1[5], array2[5], combined[10];

    
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter value " << i + 1 << " for array1: ";
        std::cin >> array1[i];
    }

    
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter value " << i + 1 << " for array2: ";
        std::cin >> array2[i];
    }

    
    for (int i = 0; i < 5; i++) {
        combined[i] = array1[i];
    }
    for (int i = 0; i < 5; i++) {
        combined[i + 5] = array2[i];
    }

    
    std::cout << "Combined array:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << i + 1 << ". " << combined[i] << "\n";
    }

    return 0;
}
