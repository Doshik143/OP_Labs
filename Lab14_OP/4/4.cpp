#include <stdio.h>
#include <windows.h>
#define SIZE 5
#define CRT_NO_SECURE_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int matrix[SIZE][SIZE];
	int max_negative = 0;
	int max_negative_i = -1, max_negative_j = -1;
	printf("Введіть елементи квадрату %dx%d:\n", SIZE, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	for (int i = 0; i < SIZE; ++i) {
		for (int j = 0; j < SIZE; ++j) {
			if ((i + j > +SIZE - 1) && (i > j)) {
				if (matrix[i][j] < 0 && matrix[i][j] < max_negative) {
					max_negative = matrix[i][j];
					max_negative_i = i;
					max_negative_j = j;
				}
			}
		}
	}
	if (max_negative_i != -1 && max_negative_j != -1) {
		printf("------------------------------------------------\n");
		printf("Найбільший від'ємний елемент у заштрихованій частині квадрата: %d\n", max_negative);
		printf("Знаходишся на позиції [%d][%d]\n", max_negative_i, max_negative_j);
	}
	else {
		printf("У заштрихованій частині квадрата відсутні від'ємні елементи\n");
	}
	return 0;
}