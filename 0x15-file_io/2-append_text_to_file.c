#include "main.h"
#include <stdio.h>
/**
  * _strlen - length of a string
  * @s: input character
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

/**
* append_text_to_file - appends text at the end of a file.
* @filename: file to append.
* @text_content: info to append into the file.
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t numletters;
	int f;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		numletters = write(f, text_content, _strlen(text_content));
		if (numletters == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
