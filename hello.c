#include <stdio.h>
#include <stdlib.h>
/**
 * main -  Thius prints Hello Walter
 * Return: This returns 0
 */
int main(void)
{	int x; /*Declaration*/
	x = 24; /*Initialization*/
	int y = 45; /*Declaration + initialization*/
	float z = 34.67;
	char a = 'R';
	char name[] = "Walter Nwaugo";


	printf("My name is %s and I have $ %f", name, z);
	printf("Hello Walter\n"); /* Inline comments. */
	printf("Hello to you toon\n"); /*prints Hello to you too*/
	printf("Enter a value:");
	x = getchar();

	printf("you entered\n");
	putchar(x);
	




	return (0);

}
