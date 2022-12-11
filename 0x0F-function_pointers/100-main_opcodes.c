#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcode
 * @a: address of the main func_
 * @n: number of bytes to be printed
 *
 * Return: void
*/

void print_opcodes(char *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%.2hhx", a[a]);
		if (a < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
*/

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
