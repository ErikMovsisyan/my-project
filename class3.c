#include <stdio.h>
#include <stdlib.h>
int main()  {
    int size = 0;
    scanf("%d",&size);
   char *ptr = (char *)malloc(size);
   for(int i = 0; i < size; i++)    {
scanf("%c",&((char*)ptr+i));
   }
return 0;

}
