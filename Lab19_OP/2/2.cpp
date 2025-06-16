#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	printf("Введіть розмір масиву: ");
	scanf_s("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));
	if (arr == NULL) {
		printf("Error\n");
		return -1;
	}
	printf("------------------------------------------------\n");
	printf("Введіть елементи масиву:\n");
	for (int i = 0; i < size; i++) {
		printf("Елемент %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
	size_t size_in_bytes = size * sizeof(int);
	int elements_count = size;
	printf("------------------------------------------------\n");
	printf("Адреса першого елементу: %p\n", (void*)&arr[0]);
	printf("------------------------------------------------\n");
	printf("Адреса останнього елементу: %p\n", (void*)&arr[elements_count - 1]);
	int temp;
	for (int i = 0; i < elements_count / 2; i++) {
		temp = arr[i];
		arr[i] = arr[elements_count - i - 1];
		arr[elements_count - i - 1] = temp;
	}
	printf("------------------------------------------------\n");
	printf("Зворотньо відсортований масив: ");
	for (int i = 0; i < elements_count; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}