#include "main.h"

/**
<<<<<<< HEAD
 * get_bit - it takes the value of a bit of index in a decimal number be return
 * @n: search for index or number or integer
 * @index: numbers of bit of index(s)
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
        int amonut_of_bit_values;

        if (index > 63)
                return (-1);
        amonut_of_bit_values = (n >> index) & 1;
        return (amonut_of_bit_values);
=======
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
>>>>>>> parent of e601dc4... Delete 0x14-bit_manipulation directory
}
