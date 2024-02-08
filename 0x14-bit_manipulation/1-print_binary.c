#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
        int leona, Sis_hoffmann = 0;
        unsigned long int new;

        for (leona = 63; leona >= 0; leona--)
        {
                new = n >> leona;
                if (new & 1)
                {
                        _putchar('1');
                        Sis_hoffmann++;
                }
                else if (new)
                        _putchar('0');
        }
        if (!new)
                _putchar('0');
=======
=======
>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
<<<<<<< HEAD
>>>>>>> parent of e601dc4... Delete 0x14-bit_manipulation directory
}
=======
}

~

~

~

>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
