#include <windows.h>
#include <stdio.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, z, a, b, s;
	printf("Введіть a: ");
	scanf_s("%d", &a);
	printf("Введіть b: ");
	scanf_s("%d", &b);
	printf("\n---------------------\n\n");
	x = a / 5;
	y = b / 3;
	z = pow((a - b), 2) / (b + 2);
	s = x + y - z;
	printf("Results s = %d\n", s);
	return 0;
}