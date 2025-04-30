#include <stdio.h>
int main()  {
FILE *file;
file = fopen("text.txt","r");
if(file == NULL)    {
    printf("error");
    return 1;
}
char content[10000];
int i = 0;
char ch;
while((ch = fgetc(file)) != EOF && i < 9999)    {
    content[i++] = tolower(ch);
    fclose(file);
    return 0;
     }

