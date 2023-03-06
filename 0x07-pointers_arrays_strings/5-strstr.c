#include "main.h"

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */

char *_strstr(char *haystack, char *needle)
{
	int i, c;
	
	i = 0,
	while(haystack[i]!='\0')
    	{
		if(haystack[i]==needle[0])
		{
			for(c=1;needle[c]!='\0';c++)
			{
				if(haystack[i+c]!=needle[c])
				{
					break;
				}
			}
			if (needle[c] == '\0')
			{
				return(haystack + i);
			}
		}
		i++;
	}
	return('\0');
}
