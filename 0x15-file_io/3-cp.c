#include "main.h"
#include <stdio.h>
/**
*error_file - checking for erros in a file
*@argv: argument vector
*@file_from: the name of the file to be checked
*@file_to: destination that file will copy to
*Return: nothing
*/
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read to file %s\n", argv[2]);
exit(99);
}

}

/**
 * main - copy the content of a file
 * @argc: for counting
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t nchar, nwr;
char buff[1024];


if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

error_file(file_from, file_to, argv);

nchar = 1024;
while (nchar == 1024)
{
nchar = read(file_from, buff, 1024);
if (nchar == -1)
error_file(-1, 0, argv);

nwr = write(file_to, buff, nchar);
if (nwr == -1)

error_file(-1, 0, argv);

}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
exit(100);
}
err_close = close(file_from);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
exit(100);
return (0);
}
}
