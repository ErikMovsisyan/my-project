#include <stdio.h>
int main()  {
 FILE * file1;
 file1 = fopen("kiraki1.c","r");
 if(file1 == NULL)  {
     printf("error");
     return 1;
 }
 char content[10000];
 char ch;
 int length = 0;
 while((ch = fgetc(file1))!=EOF && length < 9999)   {
     content[length++]=ch;
     fclose(file1);
 }
     FILE * file2;
     file2 = fopen("kiraki.c","r");
     if(file2 == NULL)   {
         printf("error");
         return 1;
     }
     for( int i = length - 1; i >= 0; i--)  {
         fputc(content[i],file2);
     }
     fclose(file2);


 

    return 0;
}
