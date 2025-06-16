#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, y;
	printf("\nВведіть x: ");
	scanf_s("%f", &x);
	printf("Введіть y: ");
	scanf_s("%f", &y);
	printf("\n---------------------\n\n");
	if (y >= 0)
	{
		if (x >= 0)
		{
			if (y >= x + 1)
			{
				printf("True\n");
			}
			else { printf("False\n"); }
		}
		else
		{
			if (y >= 1 - x)
			{
				printf("True\n");
			}
			else { printf("False\n"); }
		}
	}
	else if (y <= 0)
	{
		if (x <= 0)
		{
			if (y <= x + 1)
			{
				printf("True\n");
			}
			else { printf("False\n"); }
		}
		else
		{
			if (y <= 1 - x)
			{
				printf("True\n");
			}
			else { printf("False\n"); }
		}
	}
	return 0;
}