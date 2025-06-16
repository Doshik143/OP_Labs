#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int** allocateMatrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int rows, cols, numberToDelete;
    printf("Введіть кількість рядків та стовпців: ");
    scanf_s("%d %d", &rows, &cols);
    int** matrix = allocateMatrix(rows, cols);
    printf("------------------------------------------------\n");
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf_s("%d", &matrix[i][j]);
        }
    }
    printf("------------------------------------------------\n");
    printf("Введіть число для видалення рядків: ");
    scanf_s("%d", &numberToDelete);
    int remainingRows = 0;
    for (int i = 0; i < rows; i++) {
        int containsNumber = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == numberToDelete) {
                containsNumber = 1;
                break;
            }
        }
        if (!containsNumber) {
            if (i != remainingRows) {
                for (int j = 0; j < cols; j++) {
                    matrix[remainingRows][j] = matrix[i][j];
                }
            }
            remainingRows++;
        }
    }
    printf("------------------------------------------------\n");
    printf("Результат після видалення рядків з числом %d:\n", numberToDelete);
    for (int i = 0; i < remainingRows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    freeMatrix(matrix, rows);
    return 0;
}