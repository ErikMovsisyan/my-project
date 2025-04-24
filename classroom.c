#include <stdio.h>
#include <stdlib.h>
int main()  {
printf("enter number for matrix\n");
int n = 0;
scanf("%d",&n);
int **arr = (int**)malloc(n * sizeof(int*));
for(int i = 0 ; i < n; ++i)     {
    arr[i] = (int *)malloc(n * sizeof(int));
            }
for(int i = 0; i < n; i++)  {
    for(int j = 0; j < n; j++)  {
        if(i + j < n -1)  {
            arr[i][j] = 0;
       }
        else if(j + i == n -1)  {
            arr[i][j] = 1;
        }
        else    {
            arr[i][j] = n;
        }
    
    
    }
}


   for(int i = 0; i < n; i++)   {
       for(int j = 0; j < n; j++)   {
           printf("%d",arr[i][j]);
       }
       printf("\n");
   }
for(int i = 0; i < n; i++)  {
    free(arr[i]);
}
free(arr);
        
        

    return 0;
}



