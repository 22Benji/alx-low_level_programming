#include "main.h"

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        int k, rounder = 0;
        unsigned long int previous;
        unsigned long int ex = n ^ m;

        for (k = 63; k >= 0; k--)
        {
                previous = ex >> k;
                if (previous & 1)
                        rounder++;
        }
        return (rounder);
=======
=======
>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
<<<<<<< HEAD
>>>>>>> parent of e601dc4... Delete 0x14-bit_manipulation directory
}
=======
}

>>>>>>> parent of eec26df... Delete 0x14-bit_manipulation directory
