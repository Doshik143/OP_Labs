#include<stdio.h>
#include<windows.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	printf("Введіть n: ");
	scanf_s("%d", &n);
	printf("---------------------\n");
	int i, j, count = 0;
	if (n <= 6) printf("На даному проміжку немає досконалих чисел\n");
	else for (i = 6; i < n; i++)
	{
		count = 0;
		for (j = 1; j < i; j++)
			if (i % j == 0) count = count + j;
		if (count == i) printf("Досконале число - %d\n", i);
	}
	return 0;
}