#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define CRT_SECURE_NO_WARNING_
#define m 127
#define n 77

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int M, N, k, arr[m];
	int i;
	printf("->Введіть кілкість цілих чисел: ");
	scanf_s("%d", &M);
	printf("->Введіть кількість цілих чисел: ");
	scanf_s("%d", &N);
	printf("\n---------------------\n");
	do {
		printf("Введіть кількість чисел в рядку.\n!!!Можлива кількість чисел в рядку від [3] до [10]!!!\n\n");
		scanf_s("%d", &k);
		printf("---------------------\n");
	} while (k > 10 || k < 3);
	printf("Цілі числа:\nДіапазон значень [77,127]\n");
	for (i = 0; i < M; i++) {
		arr[i] = (77) + rand() % (50);
		printf("%6d", arr[i]);
		if (i % k == 0)
			printf("\n");
	}
	printf("\n---------------------\n");
	double arrl[n];
	int c;
	printf("Дійсні числа:\nДіапазон значень[0;10]\n");
	for (c = 0; c < N; c++) {
		arrl[c] = (double)+(rand()) / RAND_MAX * (10);
		printf("%7.1f", arrl[c]);
		if (c % k == 0)
			printf("\n");
	}
	return 0;
}