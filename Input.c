#include <stdio.h>
#include <stdlib.h>
/**
 * Variables and Input
 * Let's gooooo
 */
int main(void) 
{
	char name[100];

	printf("Enter a name\n");
	fgets(name, 100, stdin);
	printf("Your name is %s", name);
	puts(name);
	puts("My name is right\n");

	
		



	return(0);
}
