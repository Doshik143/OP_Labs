#include<stdio.h>
#include<windows.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	double i, j, s = 0, k;
	printf("Введіть a: ");
	scanf_s("%d", &a);
	printf("Введіть b: ");
	scanf_s("%d", &b);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; i <= b; i++)
		{
			k = sin(j) / (2 * i + 1);
			s = s + k;
		}
	}
	printf("---------------------\n");
	printf("Сума: %f\n", s);
	return 0;
}