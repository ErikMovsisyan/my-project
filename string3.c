#include <stdio.h>
void string(char *ptr)   {
    while(*ptr != '\0') {
        if(*ptr >= '1' && *ptr <= '9')  {
            printf("%c",*ptr);
        }
        ptr++;
    }
    
}

int main()  {
char *ptr = "abc345";

string(ptr);  
    return 0;
}
