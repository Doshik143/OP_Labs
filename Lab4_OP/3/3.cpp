#include <stdio.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    printf("\nВведіть координати точки (x, y): ");
    scanf_s("%lf %lf", &x, &y);
    printf("\n---------------------\n\n");
    double circle_x = -4; 
    double circle_y = 8;
    double circle_r = 4; 
    int inside_circle = pow(x - circle_x, 2) + pow(y - circle_y, 2) <= pow(circle_r, 2);
    double k = -1.0; 
    double b = 5;   
    int below_line = y <= k * x + b;
    if (inside_circle) {
        printf("false\n"); 
    }
    else if (below_line && y >= 0) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
    return 0;
}