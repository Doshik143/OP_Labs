#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define K 6
#define N 5

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int results[K][N];
	srand(time(NULL));
	for (int i = 0; i < K; ++i) {
		for (int j = 0; j < N; ++j) {
			results[i][j] = rand() % 130;
		}
	}
	printf("Таблиця результатів голосування:\n");
	printf("\t\t\tКандидати");
	printf("\nНаселені пункти  ");
	for (int i = 1; i <= N; ++i) {
		printf("%d\t", i);
	}
	printf("\n");
	for (int i = 0; i < K; ++i) {
		printf("\t%d\t", i + 1);
		for (int j = 0; j < N; ++j) {
			printf("%d\t", results[i][j]);
		}
		printf("\n");
	}
	int min_votes_2 = results[1][0];
	int min_candidate_2 = 1;
	int min_votes_5 = results[4][0];
	int min_candidate_5 = 1;
	for (int i = 0; i < N; ++i) {
		if (results[1][i] < min_votes_2) {
			min_votes_2 = results[1][i];
			min_candidate_2 = i + 1;
		}
		if (results[4][i] < min_votes_5) {
			min_votes_5 = results[4][i];
			min_candidate_5 = i + 1;
		}
	}
	printf("-------------------------------------------------------\n");
	printf("Кандидат %d набрав мінімальну кількість голосів у 2 населеному пункті: %d голосів\n", min_candidate_2, min_votes_2);
	printf("Кандидат %d набрав мінімальну кількість голосів у 5 населеному пункті: %d голосів\n", min_candidate_5, min_votes_5);
	return 0;
}