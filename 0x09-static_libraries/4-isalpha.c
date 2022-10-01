#include "main.h"
/**
<<<<<<< HEAD
 * _isalpha - checks for alpabetic characters
 * @c: single letter input
 * Return: 1 if c is a letter (lower or upper), 0 otherwise
=======
 * _isalpha - checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
>>>>>>> 9755d706910d574b2e962bc199cb17eac11d0ab8
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
