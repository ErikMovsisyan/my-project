#include <stdio.h>
int main()  {
printf("your numbers");
for(int i = 0; i <= 100; i++)   {
    if(i % 5 == 0 && i % 3 == 0)    {
        printf("FizzBuzz\n");
    }
    else if (i % 5 == 0) {
        printf("Buzz\n");
    }
    else if (i % 3 == 0) {
        printf("Fizz\n");
    }
    else    {
        printf("%d\n",i);
    }
}
    return 0;
}
