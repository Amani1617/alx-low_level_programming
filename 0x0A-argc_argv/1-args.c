#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: counts arguments
 * @argv: Arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char **argv)
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}
