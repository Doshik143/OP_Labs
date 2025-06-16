#include "stdio.h"
#define _USE_MATH_DEFINES
#include "math.h"
#include "windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double alpha, deg;
	printf("Введіть значення кута в радіанах (0<a<2pi): ");
	scanf_s("%lf", &alpha);
	deg = alpha * (180 / M_PI);
	printf("\n---------------------\n");
	printf("\nЗначення кута в градусах: %lf\n", deg);
	return 0;
}