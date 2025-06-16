#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count_10 = 0, count_5 = 0, menu;
	do {
		for (int i = 1; i <= 10; i++) {
			int number;
			printf("----------------------\n");
			printf("Введіть %d число: ", i);
			scanf_s("%d", &number);
			if (number > 10) {
				count_10++;
			}
			else if (number > 5) {
				count_5++;
			}
			if (count_10 > 4) {
				printf("----------------------\n");
				printf("Караул!\n");
			}
			else {
				printf("----------------------\n");
				printf("Чисел більше 10: %d\n", count_10);
				printf("Чисел більше 5: %d\n", count_5);
			}
		}
		printf("----------------------\n");
		printf("1 - continue, 0 - exit: ");
		scanf_s("%d", &menu);
		if (menu != 0 && menu != 1) printf("Error!");
	} while (menu == 1);
	return 0;
}