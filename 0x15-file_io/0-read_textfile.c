#include "main.h"

/**
 * read_textfile - reads a text file and prints to the STDOUT
 * @filename: name of the file to be read
 * @letters: maximum number of letters to be read and printed
 *
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
ssize_t bytes;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
return (0);

fp = open(filename, O_RDONLY);
if (fp == -1)
return (0);

bytes = read(fp, &buf[0], letters);
bytes = write(STDOUT_FILENO, &buf[0], bytes);
close(fp);
return (bytes);
}
