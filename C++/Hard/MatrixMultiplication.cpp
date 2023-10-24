#include <iostream>
#include <vector>

//Khansa Rahim
//https://www.hackerrank.com/challenges/linear-algebra-foundations-4-matrix-multiplication/problem

int main() {
    int row1, col1, row2, col2;

    std::cout << "Enter the number of rows and columns for the first matrix: ";
    std::cin >> row1 >> col1;

    std::cout << "Enter the number of rows and columns for the second matrix: ";
    std::cin >> row2 >> col2;

    if (col1 != row2) {
        std::cout << "Matrix multiplication is not possible. Column count of the first matrix must match the row count of the second matrix." << std::endl;
        return 1;
    }

    std::vector<std::vector<int>> matrix1(row1, std::vector<int>(col1));
    std::vector<std::vector<int>> matrix2(row2, std::vector<int>(col2));
    std::vector<std::vector<int>> result(row1, std::vector<int>(col2));

    std::cout << "Enter the elements of the first matrix:" << std::endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter the elements of the second matrix:" << std::endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    std::cout << "The result of matrix multiplication is:" << std::endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
