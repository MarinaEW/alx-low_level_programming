#include "main.h"
#define BUF_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
* main - main
* @argc: number of arguments
* @argv: a pointer point to the array of arguments
* Return: 0
**/

int main(int argc, char **argv)
{
int from_fp = 0, to_fp = 0;
ssize_t bytes;
char buf[READ_BUF_SIZE];
if (argc != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
from_fp = open(argv[1], O_RDONLY);

if (from_fp == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
to_fp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to_fp == -1)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

while ((bytes = read(from_fp, buf, READ_BUF_SIZE)) > 0)
if (write(to_fp, buf, bytes) != bytes)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

if (bytes == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

from_fp = close(from_fp);
to_fp = close(to_fp);
if (from_fp)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fp), exit(100);
if (to_fp)
dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fp), exit(100);

return (EXIT_SUCCESS);
}
