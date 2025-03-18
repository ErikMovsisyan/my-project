#include <stdio.h>
int main()  {
printf("enter two numbers:");
int a;
int b;
int count=0;
scanf("%d\n %d\n", &a, &b);
for(int i = a; i <= b; i++)
{
    if(i % 5 == 0)  {
        
        count++;
        
  
            
        }
}
printf("mijakayq [ %d, %d ] 5in bajanvox %d\n",a,b,count);
    return 0;
}
