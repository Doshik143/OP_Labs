#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num1, num2, d, menu;
	do {
		printf("Введіть перше ціле число: ");
		scanf_s("%d", &num1);
		printf("Введіть друге ціле число: ");
		scanf_s("%d", &num2);
		printf("Введіть ціле число d: ");
		scanf_s("%d", &d);
		int quotient1 = num1 / d;
		int quotient2 = num2 / d;
		int sum = quotient1 + quotient2;
		printf("----------------------\n");
		printf("Сума цілих частин від ділення: %d \n", sum);
		printf("----------------------\n");
		printf("1 - continue, 0 - exit: ");
		scanf_s("%d", &menu);
		printf("\n----------------------\n\n");
		if (menu != 0 && menu != 1) printf("Error!");
	} while (menu == 1);
	return 0;
}