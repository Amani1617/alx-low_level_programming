#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: counts arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
int pos, tot, change, aux;
int tokens[] = {25, 10, 5, 2, 1};
pos = tot = change = aux = 0;
if (argc != 2)
{
printf("ERROR\n");
return (1);
}
tot = atoi(argv[1]);
if (tot <= 0)
{
printf("0\n");
return (0);
}

while (tokens[pos] != '\0')
{
if (tot >= tokens[pos])
{
aux = (tot / tokens[pos]);
change += aux;
tot -= tokens[pos] * aux;
}
pos++;
}
printf("%d\n", change);
return (0);
}
