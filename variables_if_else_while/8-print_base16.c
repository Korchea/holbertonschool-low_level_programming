#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char a[15] = "0123456789abcdef";
	for (i = 0; i < 15; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
