#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int rows = 4;
	int columns = 5;
	int array[4][5];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			array[i][j] = 2 * i - (i + j);
		}
	}
	printf("Сформований масив:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}
	int product = 1;
	for (int i = 0; i < rows; i++) {
		product *= array[i][4];
	}
	printf("-------------------------------------------------\n");
	printf("Добуток елементів п'ятого стовпчика: %d\n", product);
	return 0;
}