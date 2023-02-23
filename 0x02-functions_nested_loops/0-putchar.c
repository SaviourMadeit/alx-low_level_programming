#include "main.h"
/**
 * main - prints Holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
