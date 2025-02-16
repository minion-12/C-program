#include <stdio.h>

int determinant(int matrix[3][3], int n) {
    if (n == 1) {
        return matrix[0][0];
    }
    int det = 0;
    int temp[3][3];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == f)
                    continue;
                temp[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return det;
}

void findNormalAndTrace(int matrix[3][3], int n) {
    int trace = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i]; // trace is sum of diagonal elements
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j]; // sum of all elements
        }
    }
    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix (sum of all elements): %d\n", sum);
}

void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Matrix after Addition:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Matrix after Multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void printBoundaryElements(int matrix[3][3], int n) {
    printf("Boundary elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[0][i]); // top row
    }
    for (int i = 1; i < n - 1; i++) {
        printf("%d ", matrix[i][n - 1]); // right column
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", matrix[n - 1][i]); // bottom row
    }
    for (int i = n - 2; i > 0; i--) {
        printf("%d ", matrix[i][0]); // left column
    }
    printf("\n");
}

void rotateMatrix(int matrix[3][3], int n) {
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }
    printf("Matrix after Rotation:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumOfDiagonals(int matrix[3][3], int n) {
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }
    printf("Sum of Primary Diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of Secondary Diagonal: %d\n", secondaryDiagonalSum);
}

void interchangeFirstLastRows(int matrix[3][3], int n) {
    for (int i = 0; i < n; i++) {
        int temp = matrix[0][i];
        matrix[0][i] = matrix[n - 1][i];
        matrix[n - 1][i] = temp;
    }
    printf("Matrix after Interchanging First and Last Rows:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void interchangeFirstLastColumns(int matrix[3][3], int n) {
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][n - 1];
        matrix[i][n - 1] = temp;
    }
    printf("Matrix after Interchanging First and Last Columns:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];
    int n = 3;  // Assuming 3x3 matrix for simplicity

    printf("Choose an option:\n");
    printf("1. Find the Determinant of a Matrix\n");
    printf("2. Find the Normal and Trace of a Matrix\n");
    printf("3. Add Two Matrices\n");
    printf("4. Multiply Two Matrices\n");
    printf("5. Print Boundary Elements of a Matrix\n");
    printf("6. Rotate Matrix Elements\n");
    printf("7. Compute the Sum of Diagonals of a Matrix\n");
    printf("8. Interchange Elements of First and Last Rows\n");
    printf("9. Interchange Elements of First and Last Columns\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Determinant of the matrix: %d\n", determinant(matrix1, n));
            break;
        case 2:
            findNormalAndTrace(matrix1, n);
            break;
        case 3:
            addMatrices(matrix1, matrix2, result, n);
            break;
        case 4:
            multiplyMatrices(matrix1, matrix2, result, n);
            break;
        case 5:
            printBoundaryElements(matrix1, n);
            break;
        case 6:
            rotateMatrix(matrix1, n);
            break;
        case 7:
            sumOfDiagonals(matrix1, n);
            break;
        case 8:
            interchangeFirstLastRows(matrix1, n);
            break;
        case 9:
            interchangeFirstLastColumns(matrix1, n);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

