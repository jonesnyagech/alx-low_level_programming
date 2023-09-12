#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4,000,000.
  *
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	do {
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++i;
	} while (k + j < 4000000);

	printf("%ld\n", sum);
	return (0);
}
