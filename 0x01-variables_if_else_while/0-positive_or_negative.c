#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - This is a main function */
/* Return - Returns value 0 */
/* betty style doc for function main goes there */

'int main(void)'
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	printf("Enter a Random Number: ")
	scanf("%d", &n);

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)
		printf("%d is negative", n);

	else
		print("%d is zero\n");
	return (0);
}
