#include <stdio.h>

int main()  {
FILE *file;
file = fopen("kiraki1.c","r");
if(file == NULL)    {
    printf("error");
    return 1;
}
char line[256];
while(fgets(line,sizeof(line),file))    {
    printf("%s",line);
}
fclose(file);
    return 0;
}
