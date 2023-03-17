#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is a main function
 * Return - Returns value of success
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("");
	scanf("%d", &n);

	if (n > 0)
		printf("%dis positive\n", n);

	else if (n < 0)
		printf("%dis negative", n);

	else
		printf("%dis zero\n", n);
	return (0);
}
