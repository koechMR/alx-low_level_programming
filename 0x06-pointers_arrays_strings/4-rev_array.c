#include "main.h"
/**
  *reverse_array - function that reverse content
  *@a: integer
  *@n: integer
  *Return: 0
  */
void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n; x++)
	{
		n--;
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
