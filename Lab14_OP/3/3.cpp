#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>
#define N 100
#define M 100
#define CRT_NO_SECURE_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int nim, mim;
	printf("Введіть кількість рядків(n<%d): ", N);
	scanf_s("%d", &nim);
	if (nim >= N || nim <= 0) {
		printf("Error\n");
		return 1;
	}
	printf("Введіть кількість стовпців(m<%d): ", M);
	scanf_s("%d", &mim);
	if (mim >= M || mim <= 0) {
		printf("Error\n");
		return 1;
	}
	double array[N][M];
	int a, b;
	printf("Введіть інтервал [a,b] для генерації чисел (b>a): ");
	scanf_s("%d %d", &a, &b);
	if (a >= b) {
		printf("Error\n");
		return 1;
	}
	srand(time(0));
	printf("--------------------------------------------------------\n");
	printf("Масив:\n");
	for (int i = 0; i < nim; ++i) {
		for (int j = 0; j < mim; ++j) {
			array[i][j] = a + (double)rand() / RAND_MAX * (b - a);
			printf("%.2f\t", array[i][j]);
		}
		printf("\n");
	}
	double max_abs_element = fabs(array[0][0]);
	for (int i = 0; i < nim; ++i) {
		for (int j = 0; j < mim; ++j) {
			if (fabs(array[i][j]) > max_abs_element) {
				max_abs_element = fabs(array[i][j]);
			}
		}
	}
	printf("--------------------------------------------------------");
	printf("\nМаксимальний за модулем елемент: %.2f\n", max_abs_element);
	printf("--------------------------------------------------------\n");
	return 0;
}