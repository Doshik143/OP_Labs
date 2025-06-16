#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_N 100

int main() {
	int arr[MAX_N];
	srand(time(NULL));
	printf("arr A = {");
	for (int i = 0; i < MAX_N; i++) {
		arr[i] = rand() % 15;
		printf("%3d ", arr[i]);
	}
	printf("}\n");
	return 0;
}