#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int seconds, menu;
	do {
		printf("Введіть секунд для таймера: ");
		scanf_s("%d", &seconds);
		int milliseconds = seconds * 1000;
		Sleep(milliseconds);
		printf("----------------------\n");
		printf("Таймер завершено!\a\n");
		printf("----------------------\n");
		printf("1 - continue, 0 - exit: ");
		scanf_s("%d", &menu);
		printf("----------------------\n\n");
		if (menu != 0 && menu != 1) printf("Error!");
	} while (menu == 1);
	return 0;
}