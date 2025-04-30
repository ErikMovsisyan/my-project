#include <stdio.h>
int main()  {
    FILE *file;
    file = fopen("kiraki.c","r+");
    if(file == NULL) {
        printf("error");
        return 1;
    }

    int i = 0;
    char ch;
    int count= 0;
    while((ch = fgetc(file))!=EOF && i < 9999)  {
        if(ch >=  '0' && ch<= '9')  {
            count++;
            
        }
        i++;
    }
    fclose(file);
    printf("%d",count);
    return 0;
}
