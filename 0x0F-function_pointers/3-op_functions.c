#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers to be return
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the diff of the two numbers to be return
 * @a: first number.
 * @b: second number.
 * Return: The diff of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of two numbers to be return
 * @a: first number
 * @b: second number
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers to be return
 * @a: first number
 * @b: second number
 * Return: quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
