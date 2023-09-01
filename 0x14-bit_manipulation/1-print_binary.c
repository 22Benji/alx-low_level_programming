#include "main.h"

/**
 * printBinary: Print binary equivalent of decimal number
 * @n: a number to be printed in binary


vaoid print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i=63; i>=0; i--)
	{
		current = n >> 1;

		if(curent & 1)
		{
			_putchar('1');
			count++;
		}
		else if(count)
			_putchar('0');
	}
	if(!count)
		_putchar('0');
}*/

#include <stdio.h>

void print_binary(unsigned long int n) {
    if (n > 1) {
        print_binary(n / 2);
    }
    printf("%u", n % 2);
}

~

~

~

