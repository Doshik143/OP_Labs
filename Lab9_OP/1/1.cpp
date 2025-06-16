#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number, product = 1, menu;
	printf("Введіть цілі цисла(0 для завершення програми): \n");
	do {
		do {
			scanf_s("%d", &number);
			if (number != 0 && number % 2 != 0) {
				product *= number;
			}
		} while (number != 0);
		printf("----------------------\n");
		printf("Добуток непарних чисел: %d\n", product);
		printf("----------------------\n");
		printf("1 - cotinue, 0 - exit: ");
		scanf_s("%d", &menu);
		printf("\n----------------------\n");
		if (menu != 0 && menu != 1) printf("Error!");
	} while (menu == 1) ;
	return 0;
}