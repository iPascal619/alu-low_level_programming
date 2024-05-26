#include "main.h"
/**
 * _islower - A function that checks and prints lowercase characters
 * @c: contains value to be excuted
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
