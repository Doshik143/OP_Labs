#include <stdio.h>
#include <windows.h>
#define MAX_SIZE 100
#define CRT_SECURE_NO_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[MAX_SIZE + 1];
	int N;
	printf("Введіть номер масиву (Не більше 100): ", MAX_SIZE);
	scanf_s("%d", &N);
	if (N > MAX_SIZE || N <= 0) {
		printf("Error\n");
		return 1;
	}
	printf("--------------------\n");
	printf("Введіть елементи масиву(Впорядковані за зростанням, крім останнього): ");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	int lastElement = arr[N - 1];
	int i = N - 2;
	while (i >= 0 && arr[i] > lastElement) {
		arr[i + 1] = arr[i];
		i--;
	}
	arr[i + 1] = lastElement;
	printf("--------------------\n");
	printf("Упорядкований масив з переміщеним останнім елементом: ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}