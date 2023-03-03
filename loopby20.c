#include <stdio.h>

int main (void)
{
	for (int i = 0; i < 1000; i = i + 20)
	{
		printf("%u ", i);
	}
	return (0);
}
