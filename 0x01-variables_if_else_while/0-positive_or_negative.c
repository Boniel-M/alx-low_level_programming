#include <stdlib.h>
#include <time.h>
/* main -  more headers goes there */
/* Return - value returns to 0 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
{
		printf("Enter a Random Number: ");
		scanf("%d", &n);
}
	if (n > 0) {
		printf("%d is positive\n");
}
	else if(n < 0) {
		printf("%d is negative");
}
	else {
		print("%d is zero");
}
		return (0);
}
