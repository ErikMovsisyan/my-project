#include <stdio.h>
int str(char *str)  {
int index = 0;
while (*str != '\0')    {
    
if(*str >= '1'&& *str<='9') {
    return index;
}
str++;
index++;
}
return -1;
}
