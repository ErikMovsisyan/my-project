#include <stdio.h>
char *strncat(char *dest, const char *src, size_t n)    {
    size_t i = 0;
    size_t length = 0;
    while(dest[length] != '\0')     {
        length++;
    }
    while(i < n)    {
        dest[length+i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
