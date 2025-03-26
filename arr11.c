#include <stdio.h>
int main()    {
int arr[] = {7,8,9,10};
printf("enter number");
int x;
int y=0;
scanf("%d",&x);
for(int i = 0; i < 4; i++)  {
    if( arr[i] == x)    {
        y = 1;
    
           
        }
}
if(y)   {
    printf("YES");
}
else    {
    printf("NO");
}
    return 0;
}
