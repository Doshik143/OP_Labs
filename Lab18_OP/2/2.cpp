#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int findMaxRecursive(int arr[], int start, int end) {
	if (start == end) {
		return arr[start];
	}
	int mid = (start + end) / 2;
	int maxLeft = findMaxRecursive(arr, start, mid);
	int maxRight = findMaxRecursive(arr, mid + 1, end);
	return (maxLeft > maxRight) ? maxLeft : maxRight;
}

int findMaxIterative(int arr[], int n) {
	int maxElement = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > maxElement) {
			maxElement = arr[i];
		}
	}
	return maxElement;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	printf("Введіть кількість елементів масиву: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("Error\n");
		return -1;
	}
	printf("Введіть елементи масиву:\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	int maxElementRecursive = findMaxRecursive(arr, 0, n - 1);
	printf("------------------------------------------------\n");
	printf("Максимальний елемент масиву (з рекурсією): %d\n", maxElementRecursive);
	int maxElementIterative = findMaxIterative(arr, n);
	printf("------------------------------------------------\n");
	printf("Максимальний елемент масиву (без рекурсії): %d\n", maxElementIterative);
	free(arr);
	return 0;
}