#include <stdio.h>
int main()  {
int arr0[5];
int arr1[5];
for(int i = 0; i < 5; ++i)  {
    scanf("%d",&arr0[i]);
}
for(int k = 0; k < 5; ++k)  {
    scanf("%d",&arr1[k]);
}
int total = 0;
for(int i = 0; i < 5; ++i)  {
    printf("%d * %d = %d\n",arr0[i],arr1[i],arr0[i] * arr1[i]);
}

    return 0;
}
