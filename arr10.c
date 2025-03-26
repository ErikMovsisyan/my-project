#include <stdio.h>
int main()  {
int arr[10];
for(int i = 0; i < 10; i++) {
    scanf("%d",&arr[i]);
}
int total = 0;
int midle;
for(int i = 0; i < 10; i++) {
    total += arr[i];
    midle = total/10;
}
printf("%d\n",midle);
    return 0;
}
