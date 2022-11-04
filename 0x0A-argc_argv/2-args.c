#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: Always 0 (Sucess)
 */

int main(int argc, char **argv)
{
int c = 0;
if (argc > 0)
{
while (c < argc)
{
printf("%s\n", argv[c]);
c++;
}
}
return (0);
}
