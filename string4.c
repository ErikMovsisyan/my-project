#include <stdio.h>
void reverse(char *ptr) {
    while(*ptr != '\0') {
        if (*ptr > 'a' && *ptr < 'z')   {
            printf("%c",*ptr-32);
        }
        else {
            printf("%c",*ptr);
        }

        ptr++;
    }
    printf("\n");
}
