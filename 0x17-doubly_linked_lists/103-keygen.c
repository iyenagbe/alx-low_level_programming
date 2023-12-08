#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find - finds the biggest number
 * @user: username
 * @flen: length of username
 * Return: the biggest number
 */
int find(char *user, int flen)
{
	int fch;
	int fvch;
	unsigned int frand_num;

	fch = *user;
	fvch = 0;

	while (fvch < flen)
	{
		if (fch < user[fvch])
			fch = user[fvch];
		fvch += 1;
	}

	srand(fch ^ 14);
	frand_num = rand();

	return (frand_num & 63);
}

/**
 * mult - multiplies each char of username
 * @user: username
 * @flen: length of username
 * Return: multiplied char
 */
int mult(char *user, int flen)
{
	int fch;
	int fvch;

	fch = fvch = 0;

	while (fvch < flen)
	{
		fch = fch + user[fvch] * user[fvch];
		fvch += 1;
	}

	return (((unsigned int)fch ^ 239) & 63);
}

/**
 * gen - generates a random char
 * @user: username
 * Return: a random char
 */
int gen(char *user)
{
	int fch;
	int fvch;

	fch = fvch = 0;

	while (fvch < *user)
	{
		fch = rand();
		fvch += 1;
	}

	return (((unsigned int)fch ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 updated
 */

int main(int argc, char **argv)
{
	char keygen[7];
	int flen, fch, fvch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (flen = 0; argv[1][flen]; flen++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(flen ^ 59) & 63];
	/* ----------- f2 ----------- */
	fch = fvch = 0;
	while (fvch < flen)
	{
		fch = fch + argv[1][fvch];
		fvch = fvch + 1;
	}
	keygen[1] = ((char *)alph)[(fch ^ 79) & 63];
	/* ----------- f3 ----------- */
	fch = 1;
	fvch = 0;
	while (fvch < flen)
	{
		fch = argv[1][fvch] * fch;
		fvch = fvch + 1;
	}
	keygen[2] = ((char *)alph)[(fch ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[find(argv[1], flen)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[mult(argv[1], flen)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[gen(argv[1])];
	keygen[6] = '\0';
	for (fch = 0; keygen[fch]; fch++)
		printf("%c", keygen[fch]);
	return (0);
}
