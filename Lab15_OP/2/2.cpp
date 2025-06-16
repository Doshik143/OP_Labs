#include <stdio.h>
#include <windows.h>
#define CRT_NO_SECURE_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int rows, cols;
	printf("Введіть кількість рядків матриці: ");
	scanf_s("%d", &rows);
	printf("Введіть кількість стовпців матриці: ");
	scanf_s("%d", &cols);
	int matrix[100][100];
	printf("Введіть елементи матриці:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	int product = 1;
	printf("-------------------------------------------------\n");
	printf("Добуток елементів у рядках без від'ємних чисел:\n");
	for (int i = 0; i < rows; i++) {
		int hasNegative = 0;
		product = 1;
		for (int j = 0; j < cols; j++) {
			if (matrix[i][j] < 0) {
				hasNegative = 1;
				break;
			}
			product *= matrix[i][j];
		}
		if (!hasNegative) {
			printf("Добуток елементів у рядку %d: %d\n", i + 1, product);
		}
		else {
			printf("У рядку %d є від'ємні елементи.\n", i + 1);
		}
	}
	return 0;
}