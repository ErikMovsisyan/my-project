#include <stdio.h>
void *myrealloc(void *addr, int oldsize, int newsize)   {
    if(oldsize > newsize)  {

          
return addr;
    }
        
        int *ptr = (int*)malloc(newsize);
        if(ptr == NULL) {
            return NULL;
        }
for(int i = 0; i < oldsize; i++)    {
ptr[i] = (char*)addr[i];
free(addr);
return ptr;


