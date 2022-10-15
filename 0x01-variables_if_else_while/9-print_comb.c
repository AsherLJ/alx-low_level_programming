#include<stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		putchar(q + '0');
		if (q < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
