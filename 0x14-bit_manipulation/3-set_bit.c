#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * set_bit - the given index sets a bit 1
 * @n: it's nothing but a pointer to change a number
 * @index: An index that set a bit 1
 * Return: 1  success, -1 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = ((1UL << index) | *n);
        return (1);
=======
=======
>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
<<<<<<< HEAD
>>>>>>> parent of e601dc4... Delete 0x14-bit_manipulation directory
}
=======
}

>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
