/*
 * File: 4-isalpha.c
 * Auth: Biniam Getu
 */

#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') ||
	    (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}
