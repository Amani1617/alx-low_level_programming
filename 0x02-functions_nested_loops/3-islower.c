#include"main"

/**
 * _islower - checks s if a caracter is lowercase
 * @c the character
 * return: 1 if the letter is lowercase , 0if not 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
       	else
	       	return (0);
}

