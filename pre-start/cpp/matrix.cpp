#include <iostream>

int main() {
    int matrixA[3][3], matrixB[3][3];

    // Input matrix A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Enter value for matrix at position [" << i << "][" << j << "]: ";
            std::cin >> matrixA[i][j];
        }
    }

    // Transpose: B[i][j] = A[j][i]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrixB[i][j] = matrixA[j][i];
        }
    }

    // Display matrix A
    std::cout << "\nMatrix A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrixA[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Display matrix B (transpose)
    std::cout << "\nMatrix B (Transpose):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrixB[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
