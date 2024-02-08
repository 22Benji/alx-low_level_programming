#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * clear_bit - the value of abit to be set to a given bit to 0
 * @n: A pointer that/to change the number to
 * @index: An index that clears a bit
 *
 * Return: 1 just success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);
        *n = (~(1UL << index) & *n);
        return (1);
=======
=======
>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
<<<<<<< HEAD
>>>>>>> parent of e601dc4... Delete 0x14-bit_manipulation directory
}
=======
}

>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
