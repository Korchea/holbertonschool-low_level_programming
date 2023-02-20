#include <stdio.h>
/**
 * main - 'Prints all possible different combinations of three digits.'
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, k;

	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			k = 48;
			while (k < 58)
			{
				if ((j != i) && (j != k) && (i != k) && (j < i) && (i < k))
				{
					putchar(j);
					putchar(i);
					putchar(k);
					if (i == 56 && j == 55 && k == 57)
					{
						break;
					}
					putchar(44);
					putchar(32);
				}
				k++;
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
