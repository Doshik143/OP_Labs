#include "stdio.h"
#include "math.h"

int main()
{
	float a1 = 100, b1 = 0.001, c1;
	double a2 = 100, b2 = 0.001, c2;
	printf("\nFloat: ");
	c1 = (pow(a1 + b1, 4.0) - (pow(a1, 4) + 4 * pow(a1, 3) * b1 + 6 * pow(a1, 2) * pow(b1, 2))) / (4 * a1 * pow(b1, 3) + pow(b1, 4));
	printf("%.15f", c1);
	printf("\n\n---------------------\n");
	printf("\nDouble: ");
	c2 = (pow(a2 + b2, 4) - (pow(a2, 4) + 4 * pow(a2, 3) * b2 + 6 * pow(a2, 2) * pow(b2, 2))) / (4 * a2 * pow(b2, 3) + pow(b2, 4));
	printf("%.15f\n", c2);
	return 0;
}