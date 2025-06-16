#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double distance = 2.0;
    double increase = 0.10;
    int days = 14;
    double totalDistance = 0.0;
    for (int day = 1; day <= days; day++)
    {
        printf("День %d: %.2f км\n", day, distance);
        totalDistance += distance;
        distance += distance * increase;
    }
    printf("---------------------\n");
    printf("За %d днів чоловік пробіжить %.2f км\n", days, totalDistance);
    return 0;
}