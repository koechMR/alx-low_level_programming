#include "main.h"
/**
*main - entry point of the program
*@argc: argument
*@argv: vectors
*Return: 0 on success
*/

void print_error(char *error_message, char *file_name, int exit_code)
int main(int argc, char **argv)
{
int file_from, file_to;
ssize_t n_bytes;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
print_error("Usage: cp file_from file_to\n", NULL, 97);
}

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
print_error("Error: Can't read from file ", argv[1], 98);
}

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
{
print_error("Error: Can't write to ", argv[2], 99);
}

while ((n_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
if (write(file_to, buffer, n_bytes) != n_bytes)
{
print_error("Error: Can't write to ", argv[2], 99);
}
}

if (n_bytes == -1)
{
print_error("Error: Can't read from file ", argv[1], 98);
}

if (close(file_from) == -1)
{
print_error("Error: Can't close fd ", argv[1], 100);
}

if (close(file_to) == -1)
{
print_error("Error: Can't close fd ", argv[2], 100);
}

return (0);
}

void print_error(char *error_message, char *file_name, int exit_code)
{
if (file_name != NULL)
{
dprintf(STDERR_FILENO, "%s%s\n", error_message, file_name);
}
else
{
dprintf(STDERR_FILENO, "%s", error_message);
}
exit(exit_code);
}
