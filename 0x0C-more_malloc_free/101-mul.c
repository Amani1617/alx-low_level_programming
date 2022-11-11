#include "main.h"

/**
 * main - product of two values
 * @argc: counts arguments
 * @argv: arguments
 * Return: int
 */

int main(int argc, char **argv)
{
unsigned long pro;
int a, b;
if (argc != 3)
{ printf("ERROR\n");
exit(98); }
for (a = 1; a < argc; a++)
{
for (b = 0; b != argv[a][b] != '\0'; b++)
{
if (argv[a][b] > 57 || argv[a][b] < 48)
{ printf("ERROR\n");
exit(98); }
}
}
pro = atoi(argv[1]) * atoi(argv[2]);
printf("%lu\n", pro);
return (0);
}
