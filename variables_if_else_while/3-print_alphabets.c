#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int i;
	char a[54] = "abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
	for (i = 0; i < 54; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
