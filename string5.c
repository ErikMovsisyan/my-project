#include <stdio.h>
void reverse(char *ptr) {
    
        if(*ptr >= 'a' && *ptr <= 'z')  {
            printf("%c", *ptr - 32);    
        }
        else    {
            printf("%c",*ptr);
            
        }
        ptr+=1;
    while(*ptr != '\0') {
if(*ptr>='a' && *ptr<='z')  {
    printf("%c",*ptr);
}
else    {
    printf("%c",*ptr+32);
}
    ptr++;     
    }
}

int main()  {
char *sstr = "hELLo";
reverse(sstr);
    return 0;
}
