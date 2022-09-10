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
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	
	printf("%s %d is %d and is ", str, n, L);
	
	if ("L > 5\n")
	{
		printf("greater than 5\n");
	}
	else if ("L == 0")
	{
		printf("0\n");
	}
	else if ("L < 6")
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
