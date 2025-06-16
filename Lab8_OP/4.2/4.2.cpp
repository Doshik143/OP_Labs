#include<stdio.h>
#include<windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double distance = 10.0;
	double increase = 0.10;
	int days = 7;
	double totalDistance = 0.0;
	int day = 1;
	while (day <= days) {
		totalDistance += distance;
		distance += distance * increase;
		day++;
	}
	printf("\nСумарний шлях за %d днів: %.2f км\n", days, totalDistance);
	return 0;
}