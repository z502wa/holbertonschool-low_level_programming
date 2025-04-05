#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * to flip from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits that must be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_val = n ^ m;
	unsigned int count = 0;

	while (xor_val > 0)
	{
		/* Check the least significant bit */
		count += (xor_val & 1);
		/* Shift bits to the right by 1 */
		xor_val >>= 1;
	}

	return (count);
}
