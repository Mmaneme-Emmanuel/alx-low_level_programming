#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of a file.
 *@text_content: what is in the new file
 *@filename: the new file with the content to be appended
 *Return: Return the appended file at the end
 */
int append_text_to_file(const char *filename, char *text_content)

{
int fd;
int nchar;
int rwr;

if (!filename)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content != NULL)

{
for (nchar = 0; text_content[nchar]; nchar++)
;
rwr = write(fd, text_content, nchar);

if (rwr == -1)
return (-1);

}
close(fd);

return (1);
}
