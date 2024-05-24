#include "main.h"
/**
 * main - entry point
 * Description: program start and ends here.
 * Return: 0 on success.
 */
int main(void)
{
	char winners[8] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(winners[i]);
	}
	_putchar('\n');
	return (0);
}
