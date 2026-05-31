#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char input[100];
    printf("Введіть цифри, розділені пробілами: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    printf("------------------------------------------------\n");
    printf("Вихідний рядок: %s\n", input);
    int length = strlen(input);
    char result[100];
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (isDigit(input[i])) {
            int digit = input[i] - '0';
            if (digit % 2 != 0) {
                result[j++] = input[i];
            }
        }
        else if (input[i] == ' ') {
            result[j++] = ' ';
        }
    }
    result[j] = '\0';
    printf("------------------------------------------------\n");
    printf("Рядок без парних цифр: %s\n", result);
    return 0;
}