#include <stdio.h>
#include <windows.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	printf("Виберіть номер пункту меню:\n\n");
	printf("1.Обчислення вартості 10 хвилинної міжміської розмови\n");
	printf("2.Обчислення функції\n");
	printf("3.Виведення назви гральної карти\n");
	printf("0.Вийти\n");
	printf("---------------------\n");
	scanf_s("%d", &num);
	printf("---------------------\n");
	switch (num)
	{
	case 1:
		printf("Обчислення вартості 10 хвилинної міжміської розмови\n\n");
		int CityCode;
		printf("Введіть код міста:\n");
		printf("44.Київ\n");
		printf("41.Житомир\n");
		printf("57.Харків\n");
		printf("37.Лювів\n");
		printf("---------------------\n");
		scanf_s("%d", &CityCode);
		printf("---------------------\n");
		switch (CityCode)
		{
		case 44:
			printf("34.15 грн.\n");
			break;
		case 41:
			printf("24.98 грн.\n");
			break;
		case 57:
			printf("32.69 грн.\n");
			break;
		case 37:
			printf("35.00 грн.\n");
			break;
		default:
			printf("Error\n");
		}
		break;
	case 2:
		printf("Обчислення функції\n\n");
		int choice, x, y, a, b, c, fx;
		printf("Введіть вид функції:\n");
		printf("1.sin(x)\n");
		printf("2.pow(x,2)\n");
		printf("3.exp(x)\n");
		printf("---------------------\n");
		scanf_s("%d", &choice);
		printf("---------------------\n");
		printf("x: ");
		scanf_s("%d", &x);
		printf("y: ");
		scanf_s("%d", &y);
		printf("---------------------\n");
		switch (choice)
		{
		case 1:
			printf("Ви обрали sin(x). Тепер маємо:\n");
			if (x > abs(y))
			{
				a = 2 * pow(sin(x), 3) + 3 * pow(y, 2);
				printf("a = %d\n", a);
			}
			else
				if (3 < x && x < abs(y))
				{
					fx = sin(x);
					b = abs(fx - y);
					printf("b = %d\n", b);
				}
				else
					fx = sin(x);
			c = cbrt(abs(fx - y));
			printf("c = %d\n", c);
			break;
		case 2:
			printf("Ви обрали pow(x,2). Тепер маємо:\n");
			if (x > abs(y))
			{
				a = 2 * pow(pow(x, 2), 3) + 3 * pow(y, 2);
				printf("a = %d\n", a);
			}
			else
				if (3 < x && x < abs(y))
				{
					fx = pow(x, 2);
					b = abs(fx - y);
					printf("b = %d\n", b);
				}
				else
					fx = pow(x, 2);
			c = cbrt(abs(fx - y));
			printf("c = %d\n", c);
			break;
		case 3:
			printf("Ви обрали exp(x). Тепер маємо:\n");
			if (x > abs(y))
			{
				a = 2 * pow(exp(x), 3) + 3 * pow(y, 2);
				printf("a = %d\n", a);
			}
			else
				if (3 < x && x < abs(y))
				{
					fx = exp(x);
					b = abs(fx - y);
					printf("b = %d\n", b);
				}
				else
					if (3 < x && x < abs(y))
					{
						fx = exp(x);
						b = abs(fx - y);
						printf("b = %d\n", b);
					}
					else
						fx = exp(x);
			c = cbrt(abs(fx - y));
			printf("c = %d\n", c);
			break;
		default:
			printf("Error!\n");
		}
		break;
	case 3:
		printf("Виведення назви гральної карти\n");
		printf("---------------------\n");
		int n, m;
		printf("Введіть номер карти(6-14): ");
		scanf_s("%d", &n);
		printf("Введіть масть карти(1-4): ");
		scanf_s("%d", &m);
		printf("---------------------\n");
		switch (n)
		{
		case 6:
			printf("Шість ");
			break;
		case 7:
			printf("Сім ");
			break;
		case 8:
			printf("Вісім ");
			break;
		case 9:
			printf("Дев'ять ");
			break;
		case 10:
			printf("Десять ");
			break;
		case 11:
			printf("Валет ");
			break;
		case 12:
			printf("Дама ");
			break;
		case 13:
			printf("Король ");
			break;
		case 14:
			printf("Туз ");
			break;
		}
		switch (m)
		{
		case 1:
			printf("Пік\n");
			break;
		case 2:
			printf("Хрест\n");
			break;
		case 3:
			printf("Бубни\n");
			break;
		case 4:
			printf("Черви\n");
			break;
		default:
			printf("Error\n");
		}
		break;
	case 0:
		printf("Ви виходите з програми\nGoodbye!\n");
		break;
	default:
		printf("Error!\n");
		break;
	}
	return 0;
}