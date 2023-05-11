#include <unistd.h>

/**
 * This is my _putchar.c
 */
int _puctchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
