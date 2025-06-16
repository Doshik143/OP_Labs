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
	double x = a;
	printf("x\tF(x)\n");
	while (x <= b) {
		double Fx = 0.5 + pow(sin(x), 2);
		printf("%.2f\t%.2f\n", x, Fx);
		x += h;
	}
	return 0;
}