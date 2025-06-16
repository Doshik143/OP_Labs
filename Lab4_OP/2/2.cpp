#include <stdio.h>
#include <windows.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, a;
    printf("\nВведіть x: ");
    scanf_s("%lf", &x);
    printf("\n---------------------\n\n");
    if (-2 <= x && x <= 2)
    {
        a = x * x;
        printf("a = x * x = %f\n", a);
    }
    else
    {
        a = 4;
        printf("a = 4\n");
    }
    return 0;
}