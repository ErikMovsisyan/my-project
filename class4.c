#include <stdio.h>
#include <stdlib.h>
int *third(int *arr1, int size1, int *arr2, int size2);

int main()  
{
    int size1 = 0;
    int size2 = 0;
int *arr1;
int *arr2;
printf("enter size of arr\n");
scanf("%d",&size1);
printf("enter second size of arr\n");
scanf("%d",&size2);
arr1 = (int *)malloc(size1 * sizeof(int));
printf("enter first arr elements\n");

for(int i = 0; i < size1; i++)  {
    scanf("%d",&arr1[i]);

}
printf("enter second arr elements\n");
 arr2 = (int *)malloc(size2 * sizeof(int));
for(int i = 0; i < size2; i++)  {
scanf("%d",&arr2[i]);
}
int *arr3 = third(arr1,size1,arr2,size2);
for(int i = 0; i < size1 + size2; i++)  {
printf("%d",arr3[i]);
}
free(arr1);
free(arr2);
free(arr3);
return 0;
}
int *third(int *arr1, int size1, int *arr2, int size2) {
int *arr3 = (int *)malloc((size1 + size2) * sizeof(int));
int j = 0;
for(int i = 0; i < size1; ++i)    
{
arr3[j]=arr1[i];
j+=2;

}
int k = 1;
for(int i = 0; i < size2; i++)  {
arr3[k]=arr2[i];
k+=2;
}
return arr3;
}    
    

