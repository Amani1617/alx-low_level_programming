#include "main.h"
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * print_alphabet - prints the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
	putchar(la);
putchar('\n');
print_alphabet();
return (0);
}
