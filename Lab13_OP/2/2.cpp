#include <stdio.h>
#include <windows.h>
#define MAX_N 16

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[MAX_N] = { 12,11,13,5,6,7,15,10,9,8,4,3,1,2,14,16 };
	printf("Початковий масив:\n{");
	for (int i = 0; i < MAX_N; ++i)
		printf("%d ", arr[i]);
	printf("}\n");
	for (int i = MAX_N / 2 - 1; i >= 0; i--) {
		int largest = i;
		int left = 2 * i + 1;
		int right = 2 * i + 2;
		while (left < MAX_N) {
			if (left + 1 < MAX_N && arr[left + 1] > arr[left])
				left++;
			if (arr[left] > arr[largest]) {
				int temp = arr[left];
				arr[left] = arr[largest];
				arr[largest] = temp;
				largest = left;
				left = 2 * largest + 1;
			}
			else {
				break;
			}
		}
	}
	for (int i = MAX_N - 1; i > 0; i--) {
		int temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		int largest = 0;
		int left = 1;
		int right = 2;
		while (left < i) {
			if (right<i && arr[right]>arr[left])
				left = right;
			if (arr[left] > arr[largest]) {
				int temp = arr[left];
				arr[left] = arr[largest];
				arr[largest] = temp;
				largest = left;
				left = 2 * largest + 1;
				right = 2 * largest + 2;
			}
			else {
				break;
			}
		}
	}
	printf("------------------------------------------\n");
	printf("Відсортований масив:\n{");
	for (int i = 0; i < MAX_N; ++i)
		printf("%d ", arr[i]);
	printf("}\n");
	return 0;
}