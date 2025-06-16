#include <stdio.h>
#include <windows.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	printf("Введіть натуральне число n: ");
	scanf_s("%d", &n);
	double result = 0.0;
	double angle = 1.0;
	int i = 1;
	while (i <= n) {
		result += 1.0 / sin(angle);
		angle += sin(i);
		i++;
	}
	printf("\n---------------------\n\n");
	printf("Результат: %lf\n", result);
	return 0;
}