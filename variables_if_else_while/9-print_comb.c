#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	for (i = 48; i < 58; i--)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(59);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
