#include <stdio.h>
#include <math.h>
int main(){
int x = 0;
int y = 0;
char z = '+';
double b = 0;
printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
printf("enter symbol:");
scanf(" %c",&z);
if(z == '+'){

    printf("%d\n",x+y);
}
if(z == '-')     {
    printf("%d\n",x-y);
}
if(z == '*')    {
printf("%d\n",x*y);
}
if(z == '/'){

    if(y != 0)        {
printf("%d\n",x/y);}
else {
    printf("udnefined\n");
      }
}
if(z == '^')    {
    printf("%d\n",x^y);
}


return 0;
}
