#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number;
	printf("\nВведіть число: ");
	scanf_s("%d", &number);
	printf("\n---------------------\n\n");
	(number % 3 == 0 && number % 7 == 0) ? printf("Число кратне 3-м і 7-ми\n") : printf("Число не є кратним 3-м і 7-ми\n");
	return 0;
}