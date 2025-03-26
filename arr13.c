#include <stdio.h>
int main()  {
int arr[10];
int count = 0;
for(int i = 0; i < 10; i++) {
    scanf("%d",&arr[i]);
}
for(int i=0; i < 10; i++)   {
if(arr[i]%2==1) {
count++;
}
}
printf("%d",count);
    return 0;
}
