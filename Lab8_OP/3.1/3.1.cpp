#include <stdio.h>
#include <windows.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a = 2.0;
	double b = 3.0;
	double h = 1.0;
	double x;
	printf("x\tF(x)\n");
	for (x = a; x <= b; x += h)
	{
		double Fx = 0.5 + sin(x) * sin(x);
		printf("%.2f\t%.2f\n", x, Fx);
	}
	return 0;
}