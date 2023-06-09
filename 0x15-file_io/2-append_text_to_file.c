#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file containing string to be appended
 * @text_content: pointer to the string we want to append
 * Return: 1 on success | -1 on failure
 * if filename is NULL return -1 | if text_content is NULL dont add anything
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fp;
ssize_t bytes = 0, length = strlen(text_content);

if (!filename)
return (-1);
fp = open(filename, O_WRONLY | O_APPEND);
if (fp == -1)
return (-1);
if (length)
bytes = write(fp, text_content, length);
close(fp);

if (bytes == length)
return (1);
else
return (-1);
}
