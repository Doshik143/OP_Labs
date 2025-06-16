#include <stdio.h>
#include <math.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

float Leng(float xA, float yA, float xB, float yB) {
	return sqrt(pow((xA - xB), 2) + pow((yA - yB), 2));
}

float Perim(float a, float b, float c) {
	return a + b + c;
}

float Area(float a, float b, float c) {
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

float Dist(float xP, float yP, float xA, float yA, float xB, float yB) {
	float SPAB = Area(Leng(xP, yP, xA, yA), Leng(xA, yA, xB, yB), Leng(xP, yP, xB, yB));
	float AB = Leng(xA, yA, xB, yB);
	return (2 * SPAB) / AB;
}

void DistAltitudes(float xA, float yA, float xB, float yB, float xC, float yC, float* hA, float* hB, float* hC) {
	*hA = (2 * Area(Leng(xB, yB, xC, yC), Leng(xA, yA, xB, yB), Leng(xA, yA, xC, yC))) / Leng(xA, yA, xB, yB);
	*hB = (2 * Area(Leng(xA, yA, xC, yC), Leng(xB, yB, xC, yC), Leng(xA, yA, xB, yB))) / Leng(xB, yB, xC, yC);
	*hC = (2 * Area(Leng(xA, yA, xB, yB), Leng(xA, yA, xC, yC), Leng(xB, yB, xC, yC))) / Leng(xC, yC, xA, yA);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float xA, yA, xB, yB, xC, yC, xD, yD;
	printf("Точка A (xA yA): ");
	scanf_s("%f %f", &xA, &yA);
	printf("Точка B (xB yB): ");
	scanf_s("%f %f", &xB, &yB);
	printf("Точка C (xC yC): ");
	scanf_s("%f %f", &xC, &yC);
	printf("Точка D (xD yD): ");
	scanf_s("%f %f", &xD, &yD);
	float AB = Leng(xA, yA, xB, yB);
	float AC = Leng(xA, yA, xC, yC);
	float AD = Leng(xA, yA, xD, yD);
	float perimeter_ABC = Perim(AB, AC, Leng(xB, yB, xC, yC));
	float perimeter_ABD = Perim(AB, AD, Leng(xB, yB, xD, yD));
	float perimeter_ACD = Perim(AC, AD, Leng(xC, yC, xD, yD));
	float area_ABC = Area(AB, AC, Leng(xB, yB, xC, yC));
	float area_ABD = Area(AB, AD, Leng(xB, yB, xD, yD));
	float area_ACD = Area(AC, AD, Leng(xC, yC, xD, yD));
	float xP, yP;
	printf("Точка P (xP yP): ");
	scanf_s("%f %f", &xP, &yP);
	float distance_AB = Dist(xP, yP, xA, yA, xB, yB);
	float distance_AC = Dist(xP, yP, xA, yA, xC, yC);
	float distance_BC = Dist(xP, yP, xB, yB, xC, yC);
	float hA, hB, hC;
	DistAltitudes(xA, yA, xB, yB, xC, yC, &hA, &hB, &hC);
	printf("---------------------------------------------------\n");
	printf("Периметр ABC: %f\n", perimeter_ABC);
	printf("Периметр ABD: %f\n", perimeter_ABD);
	printf("Периметр ACD: %f\n", perimeter_ACD);
	printf("---------------------------------------------------\n");
	printf("Площа ABC: %f\n", area_ABC);
	printf("Площа ABD: %f\n", area_ABD);
	printf("Площа ACD: %f\n", area_ACD);
	printf("---------------------------------------------------\n");
	printf("Відстань від P до AB: %f\n", distance_AB);
	printf("Відстань від P до AC: %f\n", distance_AC);
	printf("Відстань від P до BC: %f\n", distance_BC);
	printf("---------------------------------------------------\n");
	printf("Видота точки A в трикутнику ABC: %f\n", hA);
	printf("Висота точки B в трикутнику ABC: %f\n", hB);
	printf("Висота точки C в трикутнику ABC: %f\n", hC);
	printf("---------------------------------------------------\n");
	return 0;
}