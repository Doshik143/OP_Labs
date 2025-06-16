#include <stdio.h>
#include <windows.h>
#define CRT_NO_SECURE_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, m;
	printf("Введіть розмірність масиву(рядки і стовпці): ");
	scanf_s("%d %d", &n, &m);
	int matrix[100][100];
	printf("Введіть елементи масиву:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%d", &matrix[i][j]);
		}
	}
	int tempArray[100 * 100];
	int index = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tempArray[index++] = matrix[i][j];
		}
	}
	for (int i = 0; i < n * m - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n * m; j++) {
			if (tempArray[j] < tempArray[min_idx]) {
				min_idx = j;
			}
		}
		int temp = tempArray[min_idx];
		tempArray[min_idx] = tempArray[i];
		tempArray[i] = temp;
	}
	printf("------------------------------------------------\n");
	printf("Відсортований масив методом вибору:\n{");
	for (int i = 0; i < n * m; i++) {
		printf("%d ", tempArray[i]);
	}
	printf("}\n");
	index = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tempArray[index++] = matrix[i][j];
		}
	}
	for (int i = 1; i < n * m; i++) {
		int key = tempArray[i];
		int j = i - 1;
		while (j >= 0 && tempArray[j] > key) {
			tempArray[j + 1] = tempArray[j];
			j = j - 1;
		}
		tempArray[j + 1] = key;
	}
	printf("------------------------------------------------\n");
	printf("Відсортований масив методом вставок:\n{");
	for (int i = 0; i < n * m; i++) {
		printf("%d ", tempArray[i]);
	}
	printf("}\n");
	return 0;
}