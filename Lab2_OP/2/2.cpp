#include "stdio.h"
#include "math.h"
#define _USE_MATH_DEFINES
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, z, s, a, b, c;
	printf("Введіть x: ");
	scanf_s("%lf", &x);
	printf("Введіть y: ");
	scanf_s("%lf", &y);
	printf("Введіть z: ");
	scanf_s("%lf", &z);
	printf("\n---------------------\n\n");
	a = exp(z + y) * pow((z - y), (x + z));
	b = sin(x) + sin(y);
	c = pow((pow(x, 7) + log(y)), 1.0 / 4);
	s = a / b + c;
	printf("Результат: %f\n", s);
	return 0;
}