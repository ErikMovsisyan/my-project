#include <stdio.h>
int main()  {
int num = 0,count = 0;
    printf("enter number");
scanf("%d",&num);
while(num != 0) {
    if((num & 1) == 1)   {
        count ++;
}
num >>= 1;
}
printf("count of 1 bits = %d\n",count);
return 0;
}
