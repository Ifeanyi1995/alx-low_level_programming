#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negetive, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >	0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		print("%i is zero\n", n);
	
	return (0);
}
