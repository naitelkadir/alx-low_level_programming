#include "main.h"
#include <string.h>

/**
 * infinite_add - Entry point
 * @n1: input number one
 * @n2: input number two
 * @r: the buffer where we will store the sum
 * @size_r: size of the buffer
 * Return: return a string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
    	int len2 = strlen(n2);
    	int carry = 0;
    	int i = len1 - 1;
    	int j = len2 - 1;
    	int k = size_r - 1;
    	r[k] = '\0';

    	while (i >= 0 || j >= 0 || carry > 0)
	{
        int digit1 = i >= 0 ? n1[i] - '0' : 0;
        int digit2 = j >= 0 ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        if (k <= 0)
	{
            return 0;
        }

        carry = sum / 10;
        int digit = sum % 10;
        r[--k] = digit + '0';
        i--;
        j--;
    }

    return &r[k];
}
