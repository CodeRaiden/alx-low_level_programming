#include "_putchar.h"

/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
        char c[] = "Holberton";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

