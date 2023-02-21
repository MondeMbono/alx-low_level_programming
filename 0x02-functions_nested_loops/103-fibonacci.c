#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 * Return: Always 0.
 * By Monde
 */
int main(void)
{
	unsigned long a = 0, b = 1, c;
	float tot_sum;

	while (1)
	{
		c = a + b;
		if (c > 4000000)
			break;

		if ((c % 2) == 0)
			tot_sum += c;

		a = b;
		b = c;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
