#include "stdio.h"

int main()
{
	int a = 555, b = 666;
	printf("\n |%-3d||%-8d|", a, b);
	printf("\n |%-3d||%-8d|", a, b);
	printf("\n |%8d|", a);
	printf("\n |%-8d|\n", a);
	return 0;
}