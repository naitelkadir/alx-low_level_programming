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
	int i, c, sum, len1, len2;
    char *tmp;
    int rev1, rev2, revr;
    c = 0;
    
    for (i = 0; n1[i] =! '\0'; i++)
    {
        len1++;
    }
    for (i =0; n2[i] != '\0'; j++)
    {
        len2++;
    }
    for (i = 0; i < len1 / 2; i++)
    {
        rev1 = n1[i];
        n1[i] = n1[len1 - 1 - i];
        n1[len1 - 1 - i] = rev1;
    }
    for (i = 0; i < len2 / 2; i++)
    {
        rev2 = n2[i];
        n2[i] = n2[len1 - 1 - i];
        n2[len1 - 1 - i] = rev2;
    }
    
    if (len2 > len1)
    {
        
        strcpy(tmp, n1);
        strcpy(n1, n2);
        strcpy(n2, tmp);
    }
    if ((len1 > size_r) || (len1 == size_r && (n1[0] + n2[0]) >= 10))
    {
        r = '\0';
    }
    
    for (i = 0; i < len2; i++)
    {
        sum = (n1[i] - '0') + (n2[i] - '0') + c;
        r[i] = sum % 10 + '0';
        c = sum / 10;
    }
    for (i = len2; i < len1; i++)
    {
        sum = (n1[i] -'0') + c;
        r[i] = sum %10 + '0';
        c = sum /10;
    }
    if (c)
    {
        r[len1] = c;

    }
    for (i = 0; i < size_r / 2; i++)
    {
        revr = r[i];
        r[i] = r[size_r - 1 - i];
        r[size_r - 1 - i] = revr;
    }
    return (r);
}
