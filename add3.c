#include <stdio.h>
void reverse(int n) {
if(n == 0)  {
return;
    }
printf("%d0",n%10);
return reverse(n/10);
}

int main()  {
    int n = 0;
    scanf("%d",&n);

reverse(n);
    return 0;
}
