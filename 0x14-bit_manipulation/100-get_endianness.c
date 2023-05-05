#include "main.h"

/**
* get_endianness - checks the endianess
*Return: 0 if big
*/

int get_endianness(void)
{
int index = 1;
char *endian = (char *)&index;

if (*endian == 1)
return (1);

return (0);
}
