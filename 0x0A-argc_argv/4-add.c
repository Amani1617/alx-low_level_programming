#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * add_num - adds positive numbers
 * @s: string array
 *
 * Return: Always 0 (Win)
 */
int add_num(char *s)
{
unsigned int c;
c = 0;
while (c < slen(s))
{
if (!lsdigit(s[c]))
{
return (0);
}
c++;
}
return (1);
}

/**
 * main - prints the value of the code
 * @argc: counts the number of arguments
 * @argv: The arguments
 *
 * Return: Always 0 (Win)
 */

int main(int argc, char **argv)
{
int c;
int s_to_int;
int total = 0;

c = 1;
while (c < argc)
{
if (add_num(argv[c]))
{
s_to_int = atoi(argv[c]);
total += s_to_int;
}
else
{
printf("Error\n");
return (1);
}

c++;
}
printf("%d\n", total);
return (0);
}
