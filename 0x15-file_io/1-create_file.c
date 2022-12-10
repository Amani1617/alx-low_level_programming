#include <stdio.h>
#include "main.h"

/**
  * _strlen - length of a string
  * @s: input char
  * Return: length of a string
**/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

#include "main.h"

/**
 * create_file - Creates a function that creates a file.
 * @filename: a pointer to the name of the file created.
 * @text_content: a pointer to the content of text.
 * Return: If the func_ fails - -1
 *         otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
ssize_t nletters;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nletters = write(file, text_content, _strlen(text_content));
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
