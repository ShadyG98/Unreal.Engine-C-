#include <iostream>

int main() {
    int number;

    while (true) {
        std::cout << "Enter a number (1-5) or 6 to exit: ";
        std::cin >> number;

        if (number == 6) {
            std::cout << "Goodbye!\n";
            break;
        }

        switch (number) {
            case 1:
                std::cout << "You pressed number one\n";
                break;
            case 2:
                std::cout << "You pressed number two\n";
                break;
            case 3:
                std::cout << "You pressed number three\n";
                break;
            case 4:
                std::cout << "You pressed number four\n";
                break;
            case 5:
                std::cout << "You pressed number five\n";
                break;
            default:
                std::cout << "Please enter a number between 1 and 5, or 6 to exit\n";
                break;
        }
    }

    return 0;
}
