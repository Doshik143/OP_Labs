#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, a, b;
	printf("Введіть кількість елементів масиву: ");
	scanf_s("%d", &n);
	printf("---------------------\n");
	printf("Введіть значення а (менше за b): ");
	scanf_s("%d", &a);
	printf("Введіть значення b: ");
	scanf_s("%d", &b);
	printf("---------------------\n");
	if (a >= b) {
		printf("Error!");
		return 1;
	}
	int array[MAX_SIZE];
	srand(time(0));
	printf("Елементи масиву:\n\n");
	for (int i = 0; i < n; ++i) {
		array[i] = rand() % (b - a + 1) + a;
		printf("%d ", array[i]);
	}
	int min_index = 0;
	for (int i = 1; i < n; ++i) {
		if (array[i] < array[min_index]) {
			min_index = 1;
		}
	}
	printf("\n---------------------\n");
	printf("Номер мінімального елементу масиву: %d\n", min_index);
	int first_negative = -1, second_negative = -1, sum = 0;
	for (int i = 0; i < n; ++i) {
		if (array[i] < 0) {
			if (first_negative == -1) {
				first_negative = i;
			}
			else {
				second_negative = i;
				break;
			}
		}
	}
	printf("---------------------\n");
	if (first_negative != -1 && second_negative != -1) {
		for (int i = first_negative + 1; i < second_negative; ++i) {
			sum += array[i];
		}
		printf("Сума елементів масиву між першим і другим від'ємними елементами: %d\n", sum);
	}
	else {
		printf("У масиві недостатньо від'ємних елементів для обчислення суми.\n");
	}
	return 0;
}