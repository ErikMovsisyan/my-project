#include <stdio.h>
int main()  {
int n = 0;
printf("enter number\n");
scanf("%d",&n);
int count = 0;
while(n != 0)   {
n /=10;
count++;
}
if(count == 3)  {
printf("%d",YES);
}

    
}

