#include <stdio.h>
#include <windows.h>
#define MAX_SIZE 100
#define CRT_SECURE_NO_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	printf("Введіть розмір масиву(не більше 100): ", MAX_SIZE);
	scanf_s("%d", &N);
	if (N > MAX_SIZE || N <= 0) {
		printf("Error!\n");
		return 1;
	}
	printf("--------------------\n");
	int arr[MAX_SIZE];
	printf("Введіть елементи масиву: ");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	int count = 0;
	int increasing = 0, decreasing = 0;
	for (int i = 0; i < N - 1; i++) {
		if (arr[i] < arr[i + 1]) {
			if (decreasing > 0) {
				count++;
				decreasing = 0;
			}
			increasing++;
		}
		else if (arr[i] > arr[i + 1]) {
			if (increasing > 0) {
				count++;
				increasing = 0;
			}
			decreasing++;
		}
	}
	if (increasing > 0 || decreasing > 0)
		count++;
	printf("--------------------\n");
	printf("Кількість проміжків монотонності: %d\n", count);
	return 0;
}