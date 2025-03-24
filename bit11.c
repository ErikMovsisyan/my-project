#include <stdio.h>
int main()  {
int num,i,j;
printf("enter number\n");
scanf("%d", &num);
printf("enter firs index\n");
scanf("%d",&i);
printf("enter second index\n");
scanf("%d",&j);
if(i<0 || i > 31 || j < 0 || j > 31)    {
    printf("wrong index");
}
else    {
    int bit_i = (num>>i) & 1;
    int bit_j = (num>>j) & 1;
    if(bit_i != bit_j)  {
        num = num ^ ((1<<i)|(1<<j));
    }
}
printf("after change : %d\n",num);

    return 0;
}
