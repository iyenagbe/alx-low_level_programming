#include <stdio.h>
/**
 * main - This is a C program that prints the size of various types
 * Return: 0 (updated)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

        printf("Size of a char i: %lu byte(s)\n, (unsigned long) sizeof(a)");
	printf("Size of an int 4: %lu byte(s)\n, (unsigned long) sizeof(b)");
	printf("Size of a long int 4: %lu byte(s)\n, (unsigned long) sizeof(c)");
	printf("Size of a long long int 8: %lu byte(s)\n, (unsigned long) sizeof(d)");
	 printf("Size of a float 4: %lu byte(s)\n, (unsigned long) sizeof(f)");
	return (0);
}
