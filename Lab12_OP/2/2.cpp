#include <stdio.h>
#include <windows.h>
#define MAX_SIZE 100
#define CRT_SECURE_NO_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	printf("Введіть номер масиву (Не більше 100): ", MAX_SIZE);
	scanf_s("%d", &N);
	if (N > MAX_SIZE || N <= 0) {
		printf("Error\n");
		return 1;
	}
	int A[MAX_SIZE];
	double B[MAX_SIZE];
	printf("--------------------\n");
	printf("Введіть елементи масиву A: ");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &A[i]);
	}
	double sum = 0.0;
	for (int i = 0; i < N; i++) {
		sum += A[i];
		B[i] = sum / (i + 1);
	}
	printf("--------------------\n");
	printf("Масив B: ");
	for (int i = 0; i < N; i++) {
		printf("%.2f ", B[i]);
	}
	printf("\n");
	return 0;
}