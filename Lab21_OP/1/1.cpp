#include <stdio.h>
#include <string.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char input[100];
    printf("Введіть рядок: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    printf("------------------------------------------------\n");
    printf("Вихідний рядок: %s\n", input);
    reverseString(input);
    printf("------------------------------------------------\n");
    printf("Рядок у зворотному порядку: %s\n", input);
    return 0;
}