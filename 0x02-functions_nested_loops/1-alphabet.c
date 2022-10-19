#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * print_alphabet - prints the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
print_alphabet();

char la;

for (la = 'a'; la <= 'z'; la++)
	putchar(la);
putchar('\n');

return (0);
}
