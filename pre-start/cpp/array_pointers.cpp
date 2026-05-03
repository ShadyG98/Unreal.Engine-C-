/*
 * Declare an array of numbers and initialize it.
 * Declare a pointer.
 * Assign the array to the pointer.
 * Display the number and its memory address.
 */
#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int* ptr_numbers;
    ptr_numbers = numbers;

    for (int i = 0; i < 5; i++) {
        std::cout << "Number: " << numbers[i]
                  << " is at memory address: " << ptr_numbers++ << '\n';
    }

    return 0;
}
