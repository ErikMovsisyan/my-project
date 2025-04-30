#include <stdio.h>
int main()  {
    FILE * file;
    file = fopen("kiraki.c","w");
    if(file == NULL)    {
        printf("error");
        return 1;
    }
    fprintf(file,"this is my exaple.\n");
    fclose(file);
    file = fopen("kiraki.c","r");
    if(file == NULL) {
        printf("error");
        return 1;
    }
    char ch;
    printf("file content\n");
    while((ch = fgetc(file)) != EOF)    {
        putchar(ch);
    }
    fclose(file);
    return 0; 
}
