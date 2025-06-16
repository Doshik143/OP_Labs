#include <stdio.h>
#include <math.h>
#include <windows.h>
#define CRT_NO_SECURE_WARNINGS

float calculateArea(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float area = sqrt(p * (p - a) * (p - b) * (p - c));
	return area;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float side1, side2, side3;
	printf("Введіть довжини сторін трикутника: \n");
	scanf_s("%f %f %f", &side1, &side2, &side3);
	float area = calculateArea(side1, side2, side3);
	printf("----------------------------------------------\n");
	printf("Площа трикутника: %f\n", area);
	return 0;
}