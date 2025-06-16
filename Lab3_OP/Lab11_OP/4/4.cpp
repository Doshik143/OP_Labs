#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int A[8] = { 1,3,5,7,9,11,13,15 };
	int B[8] = { 2,4,5,7,8,11,13,16 };
	int count = 0;
	printf("Масив А: ");
	for (int i = 0; i < 8; ++i) {
		printf("%d ", A[i]);
	}
	printf("\n");
	printf("Масив B: ");
	for (int i = 0; i < 8; ++i) {
		printf("%d ", B[i]);
	}
	printf("\n---------------------\n");
	printf("Збігаючі елементи: ");
	int i = 0, j = 0;
	while (i < 8 && j < 8) {
		if (A[i] == B[j]) {
			printf("%d ", A[i]);
			count++;
			i++;
			j++;
		}
		else if (A[i] < B[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	printf("\n---------------------\n");
	printf("Кількість збігаючих елементів: %d\n", count);
	return 0;
}