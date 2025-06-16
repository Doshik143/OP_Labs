#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#define CRT_SECURE_NO_WARNING_

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Оберіть цифру від 1 до 10\n");
	int menu;
	scanf_s("%d", &menu);
	printf("---------------------\n");
	switch (menu) {
	case 1: {
		int arr1[10];
		int i;
		for (i = 0; i < 10; i++)
			arr1[i] = -4 + rand() % (3);
		for (i = 0; i < 10; i++)
			printf("%2d ", arr1[i]);
		printf("\n");
		break;
	}
	case 2: {
		int arr2[10];
		int i;
		for (i = 0; i < 10; i++)
			arr2[i] = 100 + rand() % (210);
		for (i = 0; i < 10; i++)
			printf("%5d ", arr2[i]);
		printf("\n");
		break;
	}
	case 3: {
		int arr3[20];
		int i;
		for (i = 0; i < 20; i++)
			arr3[i] = -35 + rand() % (34);
		for (i = 0; i < 20; i++)
			if (arr3[i] % 2 == 0)
				printf("%2d ", arr3[i]);
		printf("\n");
		break;
	}
	case 4: {
		int arr4[10];
		int i;
		for (i = 0; i < 10; i++)
			arr4[i] = -128 + rand() % (256);
		for (i = 0; i < 10; i++)
			printf("%5d ", arr4[i]);
		printf("\n");
		break;
	}
	case 5: {
		int arr5[20];
		int i;
		for (i = 0; i < 20; i++)
			arr5[i] = -7 + rand() % (20);
		for (i = 0; i < 20; i++)
			if (arr5[i] % 2 == 0)
				printf("%5d ", arr5[i]);
		printf("\n");
		break;
	}
	case 6: {
		float arr6[10];
		int i;
		for (i = 0; i < 10; i++)
			arr6[i] = -7.85 + rand() % (37);
		for (i = 0; i < 10; i++)
			printf("%2f ", arr6[i]);
		printf("\n");
		break;
	}
	case 7: {
		int arr7[10];
		int i;
		for (i = 0; i < 10; i++)
			arr7[i] = -100 + rand() % (200);
		for (i = 0; i < 10; i++)
			printf("%4d ", arr7[i]);
		printf("\n");
		break;
	}
	case 8: {
		int arr8[12];
		int i;
		for (i = 0; i < 12; i++)
			arr8[i] = 23 + rand() % (-46);
		for (i = 0; i < 12; i++)
			printf("%4d ", arr8[i]);
		printf("\n");
		break;
	}
	case 9: {
		int arr9[12];
		int i;
		for (i = 0; i < 12; i++)
			arr9[i] = 0 + rand() % (2);
		for (i = 0; i < 12; i++)
			printf("%4d ", arr9[i]);
		printf("\n");
		break;
	}
	case 10: {
		int arr10[12];
		int i;
		for (i = 0; i < 12; i++)
			arr10[i] = 4.1 + rand() % (8);
		for (i = 0; i < 12; i++)
			printf("%4d ", arr10[i]);
		printf("\n");
		break;
	}
	default:printf("Error!\n");
	}
	return 0;
}