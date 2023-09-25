#include "main.h"

/**
 * read_textfile -prints read files to POSIX standard output
 * @filename: paramenter for the file to be read
 * @letters: total byte or number of letter to read
 * return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;	/*Declaring a file descriptor variable*/
	ssize_t lenr, lenw;	/*length to read and write of the structure type ssize_t*/
	char *buffer;	/*Declaring a temporary file copy*/

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lenr = read(fd, buffer, letters);
	close(fd);	/*closing the file opened*/

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
