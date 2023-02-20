#include <stdio.h>

/**
 *  * main - Entry point
 *   * 
 *    * Description: 'the program's description'
 *     * 
 *      * Return: Always 0 (Success)
 *       */

int main(void)
{
	int i, e;

	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
