#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - 
 * Determine the last digit of the number stored in the variable n
 * greater than or less than 5, or is zero.
 *
 * Return: Alwayss 0 (Success)
 */
int main(void)
{
	int n;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("%s %d is %d and is ", str, n, n % 10);
	
	if ("n % 10 > 5\n")
	{
		printf("greater than 5\n");
	}
	else if ("n % 10 == 0")
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}

