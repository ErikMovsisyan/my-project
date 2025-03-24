#include <stdio.h>
int main()  {
int num,i;
printf("enter number\n :");
scanf("%d",&num);
printf("enter index\n :");
scanf("%d",&i);
num = num | (1<<i);
printf("your number is %d\n",num);
    return 0;
}
