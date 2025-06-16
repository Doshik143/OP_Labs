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
		int a = MAX_N / 2;
		while (a > 0) {
			for (int i = 0; i < (MAX_N - a); i++) {
				int j = i;
				while (j >= 0 && arr[j] > arr[j + a]) {
					int tmp = arr[j];
					arr[j] = arr[j + a];
					arr[j + a] = tmp;
					j--;
				}
			}
			a = a / 2;
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