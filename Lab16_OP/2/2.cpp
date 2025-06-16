#include <stdio.h>
#include <windows.h>

int calculateSum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int findMax(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int findMin(int arr[], int size) {
	int min = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

long long calculateProduct(int arr[], int size) {
	long long product = 1;
	for (int i = 0; i < size; i++) {
		product *= arr[i];
	}
	return product;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int array[] = { 3, 7, 2, 9, 4 };
	int size = sizeof(array) / sizeof(array[0]);
	int sum = calculateSum(array, size);
	printf("Масив: { 3, 7, 2, 9, 4 }\n");
	printf("-------------------------------------------------\n");
	printf("Сума елементів масиву: %d\n", sum);
	int max = findMax(array, size);
	printf("-------------------------------------------------\n");
	printf("Максимальне значення елемента масиву: %d\n", max);
	int min = findMin(array, size);
	printf("-------------------------------------------------\n");
	printf("Мінімальне значення елемента масиву: %d\n", min);
	long long product = calculateProduct(array, size);
	printf("-------------------------------------------------\n");
	printf("Добуток елементів масиву: %lld\n", product);
	return 0;
}