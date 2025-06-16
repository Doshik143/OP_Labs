#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "math.h"

int main()
{
	double a, b, c, h, alpha, beta, gamma, S, P;
	printf("a = ");
	scanf_s("%lf", &a);
	printf("h = ");
	scanf_s("%lf", &h);
	printf("alpha = ");
	scanf_s("%lf", &alpha);
	alpha *= M_PI / 180;
	b = h / sin(alpha);
	printf("\n---------------------\n");
	printf("\nb = %f", b);
	beta = asin(h / a);
	printf("\nbeta = %f pi", beta / M_PI);
	gamma = M_PI - alpha - beta;
	printf("\ngamma = %f pi", gamma / M_PI);
	c = sqrt(a * a + b * b - 2 * a * b * cos(gamma));
	printf("\nc = %f", c);
	P = a + b + c;
	printf("\nP = %f", P);
	S = h * c / 2;
	printf("\nS = %f\n", S);
	return 0;
}