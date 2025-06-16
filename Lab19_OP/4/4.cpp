#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define CRT_SECURE_NO_WARNINGS

void swapElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size = 10;
    printf("Введіть розмір масиву: ");
    scanf_s("%d", &size);
    int* array = (int*)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Error\n");
        return 1;
    }
    printf("------------------------------------------------\n");
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &array[i]);
    }
    printf("------------------------------------------------\n");
    printf("Початковий масив: {");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("}\n");
    swapElements(array, size);
    printf("------------------------------------------------\n");
    printf("Масив після обміну місцями: {");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("}\n");
    free(array);
    return 0;
}