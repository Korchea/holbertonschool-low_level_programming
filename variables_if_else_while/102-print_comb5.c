#include <stdio.h>

/**
 * main - 'Prints all possible combinations of two two-digit numbers.'
 * Return: Always 0
 */

int main(void)
{
	int i, j, k, l, m, n;

	l = 48;

	while (l < 58)
	{
		k = 48;
		while (k < 58)
		{
			j = 48;
			while (j < 58)
			{
				i = 48;
				while (i < 58)
				{
					m = (l * 10) + k;
					n = (j * 10) + i;
					if (m < n)
					{
						putchar(l);
						putchar(k);
						putchar(32);
						putchar(j);
						putchar(i);
						if ((l == 57) && (k == 56) && (j == 57) && (i == 57))
						{
							break;
						}
						putchar(44);
						putchar(32);
					}
					i++;
				}
				j++;
			}
			k++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
