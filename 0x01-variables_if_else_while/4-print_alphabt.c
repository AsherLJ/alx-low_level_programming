#include<stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char q;

	q = 'a';
	while
		(q <= 'z') {
			if ((q != 'q' && q != 'e') && q <= 'z')
				putchar(q);
			q++;
		}
	putchar('\n');
	return (0);
}

