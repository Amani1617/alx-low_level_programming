#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: character to be printed
 *
 * Return: on success 1
 *         and on error set -1, and errno is declared.
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
