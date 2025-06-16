#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int rows = 5;
	int columns = 5;
	double array[5][5];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			array[i][j] = (double)rand() / RAND_MAX * 100.0;
		}
	}
	printf("Mасив:\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%.2f \t", array[i][j]);
		}
		printf("\n");
	}
	double max_element = array[0][0];
	double min_element = array[0][0];
	int max_i = 0, max_j = 0, min_i = 0, min_j = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (array[i][j] > max_element) {
				max_element = array[i][j];
				max_i = i;
				max_j = j;
			}
			if (array[i][j] < min_element) {
				min_element = array[i][j];
				min_i = i;
				min_j = j;
			}
		}
	}
	printf("-------------------------------------------------");
	printf("\nМаксимальний елемент: %.2f, індекси: [%d][%d]\n", max_element, max_i, max_j);
	printf("-------------------------------------------------\n");
	printf("Мінімальний елемент: %.2f, індекси: [%d][%d]\n", min_element, min_i, min_j);
	printf("-------------------------------------------------");
	printf("\nСередньоарифметичні значення елементів кожного рядка:\n");
	for (int i = 0; i < rows; i++) {
		double sum = 0;
		for (int j = 0; j < columns; j++) {
			sum += array[i][j];
		}
		double avarage = sum / columns;
		printf("Рядок %d: %.2f\n", i, avarage);
	}
	double diagonal_product = 1.0;
	double diagonal_sum = 0.0;
	for (int i = 0; i < rows; i++) {
		diagonal_product *= array[i][i];
		diagonal_sum += array[i][i];
	}
	printf("-------------------------------------------------");
	printf("\nДобуток елементів головної діагоналі: %.2f\n", diagonal_product);
	printf("-------------------------------------------------\n");
	printf("Сума елементів головної діагоналі: %.2f\n", diagonal_sum);
	double below_diagonal_sum = 0.0;
	for (int i = 1; i < rows; i++) {
		for (int j = 0; j < i; j++) {
			below_diagonal_sum += array[i][j];
		}
	}
	printf("-------------------------------------------------");
	printf("\nСума елементів під головною діагоналлю: %.2f\n", below_diagonal_sum);
	printf("-------------------------------------------------\n");
	return 0;
}