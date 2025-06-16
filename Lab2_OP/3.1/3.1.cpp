#include "stdio.h"
#include "math.h"
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c;
	printf("Введіть дійсне число a: ");
	scanf_s("%lf", &a);
	printf("Введіть дійсне число b: ");
	scanf_s("%lf", &b);
	printf("Введіть дійсне число c: ");
	scanf_s("%lf", &c);
	printf("\n---------------------\n");
	printf("\n a = %lf\n b = %lf\n c = %f\n", a, b, c);
	a += c;
	c = a - c;
	a -= c;
	printf("\n---------------------\n");
	printf("Зміна значень A і C: \n\n a = %lf\n c = %f", a, c);
	c += b;
	b = c - b;
	c -= b;
	printf("\n\n---------------------\n");
	printf("Зміна значень C і B: \n\n c = %lf\n b = %f", c, b);
	b += a;
	a = b - a;
	b -= a;
	printf("\n\n---------------------\n");
	printf("Зміна значень B і A: \n\n b = %lf\n a = %f\n", b, a);
	return 0;
}