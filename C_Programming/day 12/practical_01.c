#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// Function to read a matrix of numbers from the user
void read_matrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display the transpose of a matrix
void display_transpose(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter the number of rows in the matrix (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows > MAX_ROWS || cols > MAX_COLS || rows <= 0 || cols <= 0) {
        printf("Invalid input for rows or columns.\n");
        return 1; // Return non-zero value to indicate error
    }

    read_matrix(matrix, rows, cols);
    display_transpose(matrix, rows, cols);

    return 0;
}