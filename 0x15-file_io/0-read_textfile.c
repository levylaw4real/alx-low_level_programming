#include "main.h"
/**
 * read_textfile - Reads a textfile and prints the contents to the POSIX STDOUT
 * @filename: The name of the file to read from
 * @letters: The number of characters it should print to the STDOUT
 * Return: Returns the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, check;
	char *buffer;

	if (!filename || !letters)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	check = read(file_desc, buffer, letters);
	check = write(STDOUT_FILENO, buffer, check);
	if (check < 0)
		return (0);

	close(file_desc);
	free(buffer);
	return (check);
}
