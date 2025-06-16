#include <stdio.h>
#include <windows.h>
#define CRT_NO_SECURE_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	printf("Введіть розмір квадратної матриці: ");
	scanf_s("%d", &n);
	int mat[100][100];
	printf("Введіть елементи матриці:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &mat[i][j]);
		}
	}
	for (int j = 1; j < n; j += 2) {
		for (int i = 0; i < n - 1; i++) {
			for (int k = 0; k < n - i - 1; k++) {
				if (mat[k][j] < mat[k + 1][j]) {
					int temp = mat[k][j];
					mat[k][j] = mat[k + 1][j];
					mat[k + 1][j] = temp;
				}
			}
		}
	}
	printf("-------------------------------------------------\n");
	printf("Матриця з відсортованими елементами парних стовпців:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}