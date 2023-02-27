#include "main.h"

/**
 * main - Check the code.
 * Return: Always 0.
 */

int main(void)
{
	int i, p, n;

	i = 1231952;
	p = 2;

	while (i > 1)
	{
		if ((i % p) == 0)
		{
			printf("%d ", p);
			i = i / p;
		}
		else
		{
			for (n = 2; n != p;)
			{
				if ((p % n) != 0)
				{
					n++;
				}
			}
			if (p != n)
			{
				p++;
			}
		}
	}
	return (0);
}
