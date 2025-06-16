#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

void compressArray(int arr[], int size, int threshold) {
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= threshold) {
			arr[index++] = arr[i];
		}
	}
	int max = arr[0];
	for (int i = 1; i < index; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("Максимальне значення серед елементів: %d\n", max);
	printf("Стиснутий масив: ");
	for (int i = 0; i < index; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	printf("Введіть розмір масиву: ");
	scanf_s("%d", &size);
	int* array = (int*)malloc(size * sizeof(int));
	if (array == NULL) {
		printf("Error");
		return -1;
	}
	printf("-------------------------------------------------\n");
	printf("Введіть елементи масиву:\n");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &array[i]);
	}
	int threshold;
	printf("-------------------------------------------------\n");
	printf("Введіть порогове значення: ");
	scanf_s("%d", &threshold);
	printf("-------------------------------------------------\n");
	printf("Початковий масив: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	compressArray(array, size, threshold);
	free(array);
	printf("-------------------------------------------------\n");
	return 0;
}