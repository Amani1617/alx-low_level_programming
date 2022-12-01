#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes ....
 * @c: char to be printed
 *
 * Return: on success 1
 *         other wise -1, and errno declearation
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
