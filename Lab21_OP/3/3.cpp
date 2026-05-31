#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

int countDigits(char* text) {
    int count = 0;
    while (*text != '\0') {
        if (isdigit(*text)) {
            count++;
        }
        text++;
    }
    return count;
}

int isConsonant(char letter) {
    letter = tolower(letter);
    return (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' && isalpha(letter));
}

void wordsStartingWithConsonants(char* text) {
    printf("------------------------------------------------\n");
    printf("Слова, що починаються з приголосних літер:\n");
    while (*text != '\0') {
        while (*text != '\0' && !isalpha(*text)) {
            text++;
        }
        if (*text == '\0') {
            break;
        }
        char* start = text;
        while (*text != '\0' && isalpha(*text)) {
            text++;
        }
        char* end = text;
        if (isConsonant(*start)) {
            for (char* p = start; p < end; p++) {
                printf("%c", *p);
            }
            printf("\n");
        }
    }
}

void removeWordsWithSameLetters(char* text) {
    char* start = text;
    while (*text != '\0') {
        while (*text != '\0' && !isalpha(*text)) {
            text++;
        }
        if (*text == '\0') {
            break;
        }
        char* wordStart = text;
        while (*text != '\0' && isalpha(*text)) {
            text++;
        }
        char* wordEnd = text - 1;

        if (*wordStart == *wordEnd) {
            while (wordStart <= wordEnd) {
                *wordStart = ' ';
                wordStart++;
            }
        }
    }
    printf("------------------------------------------------\n");
    printf("Текст без слів, що починаються і закінчуються на одну і ту ж літеру:\n");
    printf("%s\n", start);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char text[1000];
    printf("Введіть текстовий рядок: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';
    int digitsCount = countDigits(text);
    printf("------------------------------------------------\n");
    printf("Кількість цифр у тексті: %d\n", digitsCount);
    wordsStartingWithConsonants(text);
    removeWordsWithSameLetters(text);
    return 0;
}