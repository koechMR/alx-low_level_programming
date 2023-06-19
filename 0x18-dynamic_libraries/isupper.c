#include "main.h"
/**
  *_isupper- function that check uppercase
  *@c : parameter being checked
  *Return: Alway  0.
  */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

