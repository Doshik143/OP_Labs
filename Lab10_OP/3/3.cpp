#include<stdio.h>
#include<windows.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Введіть кількість чисел: ");
	int a, i, n, max1 = 0, max2 = 0, m = 0, k;
	scanf_s("%d", &a);
	printf("---------------------\n");
	for (i = 0; i < a; i++)
	{
		printf("Введіть число: ");
		scanf_s("%d", &n);
		m = 0;
		k = n;
		while (n != 0)
		{
			m = m + (n % 10);
			n = n / 10;
		}
		if (max2 < m)
		{
			max2 = m;
			max1 = k;
		}
	}
	printf("---------------------\n");
	printf("Найбільше число: %d, сума його цифр: %d\n", max1, max2);
	return 0;
}