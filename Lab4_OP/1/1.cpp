#include <stdio.h>
#include <windows.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c, D, x1, x2, x;
	printf("Введіть a: ");
	scanf_s("%f", &a);
	printf("Введіть b: ");
	scanf_s("%f", &b);
	printf("Введіть c: ");
	scanf_s("%f", &c);
	printf("\n---------------------\n\n");
	D = b * b - 4 * a * c;
	if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("x1 = %f\nx2 = %f\n", x1, x2);
	}
	else
		if (D == 0)
		{
			x = -b / (2 * a);
			printf("x = %f\n", x);
		}
		else printf("Коренів немає\n");
	return 0;
}