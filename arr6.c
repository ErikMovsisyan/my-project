#include <stdio.h>
int main()  {
int arr[5];
for(int i = 0; i < 5; ++i)  {
    scanf("%d",&arr[i]);    
}
int total = 0;
int prod = 1;
for(int i = 0; i < 5; ++i)  {
    total += arr[i];
    prod *= arr[i];
}
printf("%d\n %d\n",total,prod);
    return 0;
}
