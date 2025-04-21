#include <stdio.h>
#include <stdlib.h>
void *mycalloc(int byte_count,int element_count)    {
    char *ptr = (char*)malloc(byte_count*element_count);
    if( ptr == NULL) {
        return NULL;
    }
    for ( int i = 0; i < (element_count*byte_count); i++)    {
*(ptr+i)= 0;
    }
    return ptr;
    
    
}
int main()  {
int *ptr=(int *)mycalloc(4,10);
for(int i = 0; i<10; i++)   {
    ptr[i] = i*i;
    printf("%d",ptr[i]);
}
free(ptr);
    return 0;
}
