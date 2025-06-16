#include <stdio.h>
#include <windows.h>
#define CRT_NO_SECURE_WARNINGS

int reverseNumber(int num) {
	int reversed = 0;
	while (num != 0) {
		int remained = num % 10;
		reversed = reversed * 10 + remained;
		num /= 10;
	}
	return reversed;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int number;
	printf("Введіть ціле число: ");
	scanf_s("%d", &number);
	int reversedNumber = reverseNumber(number);
	printf("-------------------------------------------------\n");
	printf("Число з оберненим порядком цифр: %d\n", reversedNumber);
	return 0;
}