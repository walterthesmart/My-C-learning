#include <stdio.h>


int main(void)
{
	char grade;

	printf("Please enter your grade to see remark: ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("You're an excellent student");
		break;
	case 'B':
		printf("You're a good student");
		break;
	case 'C':
		printf("You did well");
		break;
	default:
		printf("No remark");
	}
	return (0);
}
