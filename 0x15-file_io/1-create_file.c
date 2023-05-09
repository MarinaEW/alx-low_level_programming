#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: pointer to the string we want to write
 *
 * Return: 1 on success | -1 0n failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file and give rw-------
 */

int create_file(const char *filename, char *text_content)
{
int fp;
ssize_t bytes = 0, length = strlen(text_content);
if (filename == NULL)
return (-1);
fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (fp == -1)
return (-1);

if (length)
bytes = write(fp, text_content, length);
close(fp);

if (bytes == 1)
return (0);
else
return (-1);
}
