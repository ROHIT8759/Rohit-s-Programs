/*71. Input a matrix of size (m x n) and find the sum of the even elements and odd elements
separately*/

#include <stdio.h>

int main() {
    int m, n;

    // Input matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Input matrix elements
    int matrix[m][n];
    printf("Enter the matrix elements:\n");

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of even and odd elements separately
    int sumEven = 0, sumOdd = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] % 2 == 0) {
                sumEven += matrix[i][j];
            } else {
                sumOdd += matrix[i][j];
            }
        }
    }

    // Display the results
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);

    return 0;
}