#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int* copyArray(int* arr, int size) {
	int* copy = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		copy[i] = arr[i];
	}
	return copy;
}

int* deleteElements(int* arr, int size, int value, int* newSize) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] != value) {
			arr[count++] = arr[i];
		}
	}
	*newSize = count;
	int* newArr = (int*)malloc((*newSize) * sizeof(int));
	for (int i = 0; i < *newSize; i++) {
		newArr[i] = arr[i];
	}
	return newArr;
}

int* addZeros(int* arr, int size, int* newSize) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	*newSize = size + count;
	int* newArr = (int*)malloc((*newSize) * sizeof(int));
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			newArr[index++] = 0;
		}
		newArr[index++] = arr[i];
	}

	return newArr;
}

int* deleteElementsWithValue(int* arr, int size, int value, int* newSize) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] != value) {
			arr[count++] = arr[i];
		}
	}
	*newSize = count;
	int* newArr = (int*)realloc(arr, count * sizeof(int));
	if (newArr == NULL) {
		printf("Помилка виділення пам'яті для newArr\n");
		exit(EXIT_FAILURE);
	}
	return newArr;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int size = 10;
	int* initialArray = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		initialArray[i] = rand() % 100;
	}
	printf("Початковий масив: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", initialArray[i]);
	}
	printf("\n");
	printf("------------------------------------------------\n");
	printf("Введіть елемент, який потрібно видалити: ");
	int valueToDelete;
	scanf_s("%d", &valueToDelete);
	int newSize1;
	int* resultArray1 = deleteElements(initialArray, size, valueToDelete, &newSize1);
	printf("------------------------------------------------\n");
	printf("Масив після видалення елементів зі значенням %d: ", valueToDelete);
	for (int i = 0; i < newSize1; i++) {
		printf("%d ", resultArray1[i]);
	}
	printf("\n");
	int newSize2;
	int* resultArray2 = addZeros(resultArray1, newSize1, &newSize2);
	printf("------------------------------------------------\n");
	printf("Масив після додавання 0 перед кожним парним елементом: ");
	for (int i = 0; i < newSize2; i++) {
		printf("%d ", resultArray2[i]);
	}
	printf("\n");
	free(initialArray);
	free(resultArray1);
	free(resultArray2);
	return 0;
}