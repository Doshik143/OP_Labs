#include "stdio.h"
#include "math.h"

int main()
{
	int m = 7, n = 4, y;
	printf("\nm = %d, n = %d         |\n", m, n);
	printf("---------------------\n\n");
	y = n++ - m;
	printf("n++ - m = %d\n", y);
	y = m-- > n;
	printf("m-- > n = %d\n", y);
	y = n-- > m;
	printf("n-- > m = %d\n", y);
	y = n-- - -m;
	printf("n-- - -m = %d\n", y);
	y = --m - ++n;
	printf("--m - ++n=%d\n", y);
	y = m * n < n++;
	printf("m*n < n++=%d\n", y);
	printf("\n---------------------\n");
	return 0;
}