#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
        int alx;
        unsigned int abraham = 0;

        if (!b)
                return (0);
        for (alx = 0; b[alx]; alx++)
        {
                if (b[alx] < '0' || b[alx] > '1')
                        return (0);
                abraham = 2 * abraham + (b[alx] - '0');
        }
        return (abraham);
=======

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
>>>>>>> parent of e601dc4... Delete 0x14-bit_manipulation directory
}
