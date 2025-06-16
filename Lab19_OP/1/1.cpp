#include <stdio.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x = 10, y = 20;
    int m[5];
    int* ptr;
    ptr = &y;
    printf("Введіть 5 елементів масиву:\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &m[i]);
    }
    printf("------------------------------------------------\n");
    printf("Значення змінної y через покажчик: %d\n", *ptr);
    y += 7;
    printf("------------------------------------------------\n");
    printf("Адреса покажчика ptr: %p\n", (void*)ptr);
    *ptr += 5;
    printf("------------------------------------------------\n");
    printf("Значення змінної y після операції *ptr+=5: %d\n", y);
    return 0;
}