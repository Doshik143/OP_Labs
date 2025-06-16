#include <stdio.h>
#include <windows.h>

int Fib(int N) {
	if (N <= 2) return 1;
	int a = 1, b = 1, c;
	for (int i = 3; i <= N; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int Fin(int N) {
	return Fib(N);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N1 = 5, N2 = 10, N3 = 15, N4 = 20, N5 = 25;
	int result1 = Fin(N1);
	int result2 = Fin(N2);
	int result3 = Fin(N3);
	int result4 = Fin(N4);
	int result5 = Fin(N5);
	printf("----------------------------\n");
	printf("\tF%d = %d\n", N1, result1);
	printf("----------------------------\n");
	printf("\tF%d = %d\n", N2, result2);
	printf("----------------------------\n");
	printf("\tF%d = %d\n", N3, result3);
	printf("----------------------------\n");
	printf("\tF%d = %d\n", N4, result4);
	printf("----------------------------\n");
	printf("\tF%d = %d\n", N5, result5);
	printf("----------------------------\n");
	return 0;
}