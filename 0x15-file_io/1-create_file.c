#include "main.h"

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int fp, fpwrite, count = 0;
	
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY);
	if (fp == -1)
	{
		return (-1);
	}
	while (text_content[count] != '\0')
	{
		count++;
	}
	fpwrite = write (fp, text_content, count);
	if (fpwrite == -1)
	{
		return (-1);
	}
	close (fp);
	return (1);
}
