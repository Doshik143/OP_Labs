#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

unsigned long long factorial(unsigned int x);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned int number;
	printf("Введіть число для обчислення факторіала: ");
	scanf_s("%u", &number);
	unsigned long long fact = factorial(number);
	printf("-------------------------------------------------\n");
	printf("Факторіал числа %u = %llu\n", number, fact);
	return 0;
}

unsigned long long factorial(unsigned int x) {
	if (x == 0 || x == 1) {
		return 1;
	}
	else {
		return x * factorial(x - 1);
	}
}