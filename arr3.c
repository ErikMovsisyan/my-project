#include <stdio.h>
int main()  {
    int arr[5];
printf("enter 5 numbers\n");
for(int i = 0; i < 5; ++i)  {
    scanf("%d",&arr[i]);
}
int max = arr[0];
int maxindex = 0;
for(int i = 0; i < 5; ++i)  {
    if(max < arr[i]) {
        max = arr[i];
        maxindex = i;
    } 
}
        printf("index - %d\n",maxindex);
    

    return 0;
}
