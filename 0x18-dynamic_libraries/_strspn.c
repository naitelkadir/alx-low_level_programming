#include "main.h"
#include <unistd.h>

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && *accept != '\0') {
        if (*s != *accept) {
            break;
        }
        count++;
        s++;
        accept++;
    }
    return count;
}
