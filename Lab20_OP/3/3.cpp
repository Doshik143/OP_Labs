#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

void mergeArrays(int x[], int y[], int a, int b) {
    int* merged = (int*)malloc((a + b) * sizeof(int));
    for (int i = 0; i < a; i++) {
        merged[i] = x[i];
    }
    for (int i = 0; i < b; i++) {
        merged[a + i] = y[i];
    }
    printf("------------------------------------------------\n");
    printf("Елементи обох масивів:\n{");
    for (int i = 0; i < a + b; i++) {
        printf("%d ", merged[i]);
    }
    printf("}\n");
    int* common = (int*)malloc((a < b ? a : b) * sizeof(int));
    int count = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (x[i] == y[j]) {
                common[count++] = x[i];
                break;
            }
        }
    }
    printf("------------------------------------------------\n");
    printf("Спільні елементи:\n{");
    for (int i = 0; i < count; i++) {
        printf("%d ", common[i]);
    }
    printf("}\n");
    free(merged);
    free(common);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;
    printf("Введіть розмір першого масиву (x[a]): ");
    scanf_s("%d", &a);
    int* x = (int*)malloc(a * sizeof(int));
    printf("------------------------------------------------\n");
    printf("Введіть елементи першого масиву:\n");
    for (int i = 0; i < a; i++) {
        scanf_s("%d", &x[i]);
    }
    printf("------------------------------------------------\n");
    printf("Введіть розмір другого масиву (y[b]): ");
    scanf_s("%d", &b);
    int* y = (int*)malloc(b * sizeof(int));
    printf("------------------------------------------------\n");
    printf("Введіть елементи другого масиву:\n");
    for (int i = 0; i < b; i++) {
        scanf_s("%d", &y[i]);
    }
    mergeArrays(x, y, a, b);
    free(x);
    free(y);
    return 0;
}