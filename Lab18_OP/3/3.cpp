#include <stdio.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

double calculateY(double x, int N) {
    if (N % 2 == 0) {
        double temp = x;
        for (int i = 1; i < N / 2; ++i) {
            temp *= x;
        }
        return temp * temp;
    }
    else {
        double temp = x;
        for (int i = 1; i < N - 1; ++i) {
            temp *= x;
        }
        return x * temp;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x;
    int N;
    printf("Введіть значення x: ");
    scanf_s("%lf", &x);
    printf("Введіть значення N: ");
    scanf_s("%d", &N);
    double result = calculateY(x, N);
    printf("------------------------------------------------\n");
    printf("Результат: %lf\n", result);
    return 0;
}