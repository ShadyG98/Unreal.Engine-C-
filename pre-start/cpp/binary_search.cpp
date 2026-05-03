#include <iostream>

int main() {
    int list[] = {1, 2, 3, 4, 5};
    int value, index, low, high, mid, size;
    bool found = false;
    
    size = sizeof(list) / sizeof(list[0]);
    
restart:
    index = 0;
    low = 0;
    high = size;

    std::cout << "Enter a value from the following list: ";
    for (int i = 0; i < size; i++) {
        std::cout << list[i] << " ";
    }
    std::cout << "\nEnter the value: ";
    std::cin >> value;

    while ((low <= high) && (index < size)) {
        mid = (low + high) / 2;
        if (list[mid] == value) {
            found = true;
            break;
        }
        if (list[mid] > value) {
            high = mid;
            mid = (low + high) / 2;
        }
        if (list[mid] < value) {
            low = mid;
            mid = (low + high) / 2;
        }
        index++;
    }
    
    if (!found) {
        std::cout << "Value not found. Please try again:\n";
        goto restart;
    }
    
    if (found) {
        std::cout << "Value found at position: " << mid + 1 << "\n";
    }

    return 0;
}
