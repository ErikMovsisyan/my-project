#include <stdio.h>
int main()
{
int i,num,result;
printf("enter number\n");
scanf("%d",&num);
for(i = 0; i < 32; i++) {
    num = num <<1;
     result= num & 1;
}
printf("%d",result);

    return 0;
}
