#include <stdio.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int L[11] = { 5, -3, 7, -2, 0, 8, -9, 4, -1, 6, -6 };
	int positiveCount = 0, negativeCount = 0;
	for (int i = 0; i < 11; i++) {
		if (L[i] > 0)
			positiveCount++;
		else
			negativeCount++;
	}
	int resultA[11];
	int posIndex = 0, negIndex = positiveCount;
	for (int i = 0; i < 11; i++) {
		if (L[i] > 0)
			resultA[posIndex++] = L[i];
		else
			resultA[negIndex++] = L[i];
	}
	int F[14] = { 10, 3, 7, 14, 2, 8, 6, 9, 5, 1, 12, 4, 11, 13 };
	int first = F[0];
	int largerCount = 0;
	for (int i = 0; i < 14; i++) {
		if (F[i] > first)
			largerCount++;
	}
	int resultB[14];
	int largerIndex = 0, smallerIndex = largerCount + 1;
	for (int i = 0; i < 14; i++) {
		if (F[i] > first)
			resultB[largerIndex++] = F[i];
		else if (F[i] < first)
			resultB[smallerIndex++] = F[i];
	}
	resultB[largerCount] = first;
	printf("Новий масив L:\n");
	for (int i = 0; i < 11; i++) {
		printf("%d ", resultA[i]);
	}
	printf("\n--------------------");
	printf("\nКількість додатніх елементів: %d\nКількість від'ємних елементів: %d\n", positiveCount, negativeCount);
	printf("--------------------\n");
	printf("Вхідний масив F:\n");
	for (int i = 0; i < 14; i++) {
		printf("%d ", F[i]);
	}
	printf("\n--------------------");
	printf("\nНовий вихідний масив F:\n");
	for (int i = 0; i < 14; i++) {
		printf("%d ", resultB[i]);
	}
	printf("\n");
	return 0;
}