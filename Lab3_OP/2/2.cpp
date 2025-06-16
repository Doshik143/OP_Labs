#include "stdio.h"
#include "math.h"
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("num = 2.53\n\n");
	double a = 2.53, y, x;
	y = modf(a, &x);
	y = y * 100;
	printf("x = %lf\n", y);
	printf("y = %lf\n", x);
	int b, c;
	printf("\n---------------------\n\n");
	b = round(y);
	c = x;
	printf("x = %d\n", b);
	printf("y = %d\n", c);
	printf("\n%d студенти грути ПІ-%d %d рази отримали по %d за залік з математики\n", c, b, c, c);
	return 0;
}