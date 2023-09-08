#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - my name is raymond am new to programming
* Return: 0 (Updated).
*/
int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
	printf("%d is zero\n", n);
return (0);
}
