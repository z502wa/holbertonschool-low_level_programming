#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function takes two integer pointers as parameters
 * and swaps the values they point to.
 */
void swap_int(int *a, int *b)
{
	int temp; /* Temporary variable to hold one value */

	temp = *a; /* Store the value of 'a' in temp */
	*a = *b;   /* Assign the value of 'b' to 'a' */
	*b = temp; /* Assign the stored value in temp to 'b' */
}
