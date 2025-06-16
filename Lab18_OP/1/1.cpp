#include <stdio.h>
#include <stdlib.h> 
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int findMin(int arr[], int size) {
	if (size == 1) {
		return arr[0];
	}
	else {
		int min_of_rest = findMin(arr, size - 1);
		return(min_of_rest < arr[size - 1]) ? min_of_rest : arr[size - 1];
	}
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
	printf("------------------------------------------------\n");
	printf("Введіть елементи масиву:\n");
	for (int i = 0; i < size; ++i) {
		printf("Елемент %d: ", i + 1);
		scanf_s("%d", &array[i]);
	}
	int minElement = findMin(array, size);
	printf("------------------------------------------------\n");
	printf("Мінімальний елемент масиву: %d\n", minElement);
	free(array);
	return 0;
}