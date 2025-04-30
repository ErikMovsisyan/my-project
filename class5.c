#include <stdio.h>
#include <stdlib.h>

int main()
{
int *arr;
int size;
printf("enter arrays size\n");
scanf("%d",&size);
arr = (int *)malloc(size * sizeof(int));
printf("enter arrays elements\n");
int j = 0;
 int *arr2 = (int *)malloc(size * sizeof(int));
for(int i = 0; i < size; i++)   {
scanf("%d",&arr[i]);
if(arr[i] % 2 == 1) {
    arr2[j]=arr[i];
    j++;
}

}
for(int i = 0; i < j; i++)  {
printf("%d",arr2[i]);
}
free(arr);
free(arr2);

    return 0;
}
