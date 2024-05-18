#include <stdio.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
