#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define ROWS 4
#define COLS 4
#define CRT_SECURE_NO_WARNINGS

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int matrix[ROWS][COLS];
    printf("Введіть елементи матриці %dx%d:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Елемент [%d][%d]: ", i, j);
            scanf_s("%d", &matrix[i][j]);
        }
    }
    printf("------------------------------------------------\n");
    printf("Адреси елементів нижче головної діагоналі:\n");
    for (int i = 1; i < ROWS; i++) {
        for (int j = 0; j < i; j++) {
            printf("Елемент [%d][%d]: Адреса - %p\n", i, j, (void*)&matrix[i][j]);
        }
    }
    return 0;
}