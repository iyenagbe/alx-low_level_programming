#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*  positive_or_negative - my name is raymond am new to programming
*
*  @i: integer
* Return: 0 (Updated).
*/
void positive_or_negative(int i)
{

if (i > 0)
	printf("%d is positive\n", i);
else if (i < 0)
	printf("%d is negative\n", i);
else
	printf("%d is zero\n", i);
}
