#include <iostream>

int main() {
    int rowsA, colsA, rowsB, colsB;
    int matrixA[10][10], matrixB[10][10];

restart:
    std::cout << "Enter dimensions for matrix A (rows cols): ";
    std::cin >> rowsA >> colsA;
    std::cout << "Enter dimensions for matrix B (rows cols): ";
    std::cin >> rowsB >> colsB;

    // Check if both matrices are square and same size
    if (rowsA == colsA && rowsB == colsB && rowsA == rowsB) {
        
        // Fill matrix A
        fillMatrixA:
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsA; j++) {
                std::cout << "Enter value for matrix A at position [" << i+1 << "][" << j+1 << "]: ";
                std::cin >> matrixA[i][j];
            }
        }

        // Fill matrix B
        for (int i = 0; i < rowsB; i++) {
            for (int j = 0; j < colsB; j++) {
                std::cout << "Enter value for matrix B at position [" << i+1 << "][" << j+1 << "]: ";
                std::cin >> matrixB[i][j];
            }
        }

        // Check symmetry: A[i][j] == B[j][i]
        for (int i = 0; i < rowsA; i++) {
            for (int j = 0; j < colsA; j++) {
                if (matrixA[i][j] != matrixB[j][i]) {
                    std::cout << "Matrices are not symmetric. Please try again.\n";
                    goto fillMatrixA;
                }
            }
        }
    } else {
        std::cout << "Matrices must be square and same size. Please try again.\n";
        goto restart;
    }

    std::cout << "Success! Matrices are symmetric.\n";

    return 0;
}
