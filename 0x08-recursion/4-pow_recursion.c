#include "main.h"
/**
 * _pow_recursion - fuction that return value of x raised y
 * @x: intput
 * @y: input int
 * Return: y if  is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}