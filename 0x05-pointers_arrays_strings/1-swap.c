#include "main.h"
/**
  *swap_int - function that swaps values
  *@a: integer 1
  *@b: integer 2
  *Return: integers
  */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
