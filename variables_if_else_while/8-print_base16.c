#include <stdio.h>
/**
 *main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 97;

	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
