#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: raising value
 * @y: raised value
 *
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
Footer
© 2022 GitHub, Inc.
Footer navigation

    Terms
    Privac
