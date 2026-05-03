#include <iostream>

int main() {
    char letter;

    do {
        std::cout << "Press the letter 'a': ";
        std::cin >> letter;
    } while (letter == 'a');

    return 0;
}
