#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code.
 * Description: 'Prints the minimum number of coins to make
 * change for an amountof money.'
 * @argc: Is the number of argument.
 * @argv: Is the amount of the argument.
 * Return: 1 if the number of arguments is not 1.
 */

int main(int argc, char *argv[])
{
	int j, k;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]);
		k = 0;
		while (j > 0)
		{
			if (j >= 25)
			{
				j -= 25;
			}
			else
			{
				if (j >= 10)
				{
					j -= 10;
				}
				else
				{
					if (j >= 5)
					{
						j -= 5;
					}
					else
					{
						if (j >= 2)
						{
							j -= 2;
						}
						else
						{
							if (j >= 1)
							{
								j -= 1;
							}
						}
					}
				}

			}
			k++;
		}
		printf("%d\n", k);
		return (0);
	}
}
