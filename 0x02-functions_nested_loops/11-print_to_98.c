#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Will print numbers to 98
 * @n: input number
 * By Monde
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
		else
		{
			for (n = n; n >= 98; n--)
			{
				printf("%d", n);
				if (n != 98)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
}
