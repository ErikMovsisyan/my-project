#include <stdio.h>

 

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int count = 0;
	while (num != 0) {
		if ((num & 1) == 1) {
			count++;
		}
		num >>= 1;
	}
    if(count%2==0)  {
        printf("count of 1 bit is even");
    }
    else    {
        printf("count of 1 bits is odd");
    }
       
	printf("Count of one bits = %d\n", count);
    return 0;
    }

