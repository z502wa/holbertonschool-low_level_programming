#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to change.
 * @to: The string to set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
