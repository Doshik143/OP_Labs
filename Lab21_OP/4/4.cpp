#include <stdio.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

void beepDot() {
    Beep(1000, 100);
    printf(".");
}

void beepDash() {
    Beep(1000, 300);
    printf("-");
}

void telegraph(const char* message) {
    while (*message != '\0') {
        switch (*message) {
        case 'a':
        case 'A':
            beepDot();
            beepDash();
            break;
        case 'b':
        case 'B':
            beepDash();
            beepDot();
            beepDot();
            beepDot();
            break;
        case 'c':
        case 'C':
            beepDash();
            beepDot();
            beepDash();
            beepDot();
            break;
        case 'd':
        case 'D':
            beepDash();
            beepDot();
            beepDot();
            break;
        case 'e':
        case 'E':
            beepDot();
            break;
        case 'f':
        case 'F':
            beepDot();
            beepDot();
            beepDash();
            beepDot();
            break;
        case 'g':
        case 'G':
            beepDash();
            beepDash();
            beepDot();
            break;
        case 'h':
        case 'H':
            beepDot();
            beepDot();
            beepDot();
            beepDot();
            break;
        case 'i':
        case 'I':
            beepDot();
            beepDot();
            break;
        case 'j':
        case 'J':
            beepDot();
            beepDash();
            beepDash();
            beepDash();
            break;
        case 'k':
        case 'K':
            beepDash();
            beepDot();
            beepDash();
            break;
        case 'l':
        case 'L':
            beepDot();
            beepDash();
            beepDot();
            beepDot();
            break;
        case 'm':
        case 'M':
            beepDash();
            beepDash();
            break;
        case 'n':
        case 'N':
            beepDash();
            beepDot();
            break;
        case 'o':
        case 'O':
            beepDash();
            beepDash();
            beepDash();
            break;
        case 'p':
        case 'P':
            beepDot();
            beepDash();
            beepDash();
            beepDot();
            break;
        case 'q':
        case 'Q':
            beepDash();
            beepDash();
            beepDot();
            beepDash();
            break;
        case 'r':
        case 'R':
            beepDot();
            beepDash();
            beepDot();
            break;
        case 's':
        case 'S':
            beepDot();
            beepDot();
            beepDot();
            break;
        case 't':
        case 'T':
            beepDash();
            break;
        case 'u':
        case 'U':
            beepDot();
            beepDot();
            beepDash();
            break;
        case 'v':
        case 'V':
            beepDot();
            beepDot();
            beepDot();
            beepDash();
            break;
        case 'w':
        case 'W':
            beepDot();
            beepDash();
            beepDash();
            break;
        case 'x':
        case 'X':
            beepDash();
            beepDot();
            beepDot();
            beepDash();
            break;
        case 'y':
        case 'Y':
            beepDash();
            beepDot();
            beepDash();
            beepDash();
            break;
        case 'z':
        case 'Z':
            beepDash();
            beepDash();
            beepDot();
            beepDot();
            break;
        case '1':
            beepDot();
            beepDash();
            beepDash();
            beepDash();
            beepDash();
            break;
        case '2':
            beepDot();
            beepDot();
            beepDash();
            beepDash();
            beepDash();
            break;
        case '3':
            beepDot();
            beepDot();
            beepDot();
            beepDash();
            beepDash();
            break;
        case '4':
            beepDot();
            beepDot();
            beepDot();
            beepDot();
            beepDash();
            break;
        case '5':
            beepDot();
            beepDot();
            beepDot();
            beepDot();
            beepDot();
            break;
        case '6':
            beepDash();
            beepDot();
            beepDot();
            beepDot();
            beepDot();
            break;
        case '7':
            beepDash();
            beepDash();
            beepDot();
            beepDot();
            beepDot();
            break;
        case '8':
            beepDash();
            beepDash();
            beepDash();
            beepDot();
            beepDot();
            break;
        case '9':
            beepDash();
            beepDash();
            beepDash();
            beepDash();
            beepDot();
            break;
        case '0':
            beepDash();
            beepDash();
            beepDash();
            beepDash();
            beepDash();
            break;
        case ' ':
            Sleep(500);
            printf(" ");
            break;
        default:
            break;
        }
        message++;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char message[1000];
    printf("Введіть повідомлення для відображення в телеграфному коді:\n\t");
    fgets(message, sizeof(message), stdin);
    printf("------------------------------------------------\n");
    printf("Телеграфний код: \n");
    telegraph(message);
    return 0;
}