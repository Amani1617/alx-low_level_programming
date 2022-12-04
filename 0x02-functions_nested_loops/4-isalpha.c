#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: the character to be checked
 *
 * Return: 1 if the letter is lowercase, 0 if not
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' &&
c <= 'Z'));
}
