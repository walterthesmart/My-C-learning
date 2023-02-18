#include <stdio.h>

/**
 * main -  main function
 * Return: returns 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 4; i++)
	{
		printf("This is the STARTING Of The Outer loop %d\n", i);
			for (j = 0; j <= 4; j++)
			{
				printf("Inner LOop with number %d\n", j);
			}

		printf("This is the ENDING of the outer loop %d\n", i);
	}
	return (0);
}
