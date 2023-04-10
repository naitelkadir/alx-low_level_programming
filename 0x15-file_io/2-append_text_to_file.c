#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 *Return: ...
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, count = 0, fpwrite;
	
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fp = open(filename, O_APPEND | O_WRONLY);
	if (fp == -1)
	{
		return (-1);
	}
	while (text_content[count] != '\0')
	{
		count++;
	}
	fpwrite = write(fp, text_content, count);
	if (fpwrite == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
