#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define MAX_N 100

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[MAX_N];
	int tmp, imin;
	srand(time(NULL));
	printf("arr A = {");
	for (int i = 0; i < MAX_N; i++) {
		arr[i] = rand() % 21 - 10;
		printf("%3d ", arr[i]);
	}
	printf("}\n");
	printf("--------------------------------------------------\n");
	clock_t start_time = clock();
	printf("Відсортований масив A = {");
	for (int i = 0; i < MAX_N; i++) {
		for (int i = 1; i < MAX_N; i++) {
			tmp = arr[i];
			for (int j = i - 1; j >= 0 && arr[j] > tmp; j--) {
				arr[i + 1] = arr[j];
				arr[j] = tmp;
			}
		}
		printf("%3d ", arr[i]);
	}
	clock_t end_time = clock();
	double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
	printf("}\n");
	printf("--------------------------------------------------\n");
	printf("Час виконання сортування: %.6f секунд\n", total_time);
	return 0;
}