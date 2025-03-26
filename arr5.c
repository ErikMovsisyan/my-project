#include <stdio.h>
int main()  {
int arr[10];
printf("enter 10 numbers\n");
for(int i = 0; i < 10; ++i) {
    scanf("%d",&arr[i]);    
}
int max = arr[0];
for (int i = 0; i < 10; ++i)    {
    if(arr[i] > max)    {
        max = arr[i]; 
    }
}
int min = arr[0];
for (int i = 0; i < 10; ++i)    {
    if(arr[i] < min)    {
        min = arr[i];
    }
}
printf("%d + %d = %d\n",max,min,max+min);
    return 0;
}
