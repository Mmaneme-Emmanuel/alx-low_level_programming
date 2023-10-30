#include "main.h"
/**
 *create_file - function that creates a file.
 *@filename:the name of the new file
 *@text_content: string of char in the new file
 * Return: return the new created file
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int nchar;
int rwr;


if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (text_content == NULL)
text_content = "";

for (nchar = 0; text_content[nchar]; nchar++)
;

rwr = write(fd, text_content, nchar);

if (rwr == -1)
return (-1);
close(fd);
return (1);
}
