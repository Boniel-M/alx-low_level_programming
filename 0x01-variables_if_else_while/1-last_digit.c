#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is a main function
 * Return - returns value success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;
	printf("Last digit of %d is \n", n);

	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
