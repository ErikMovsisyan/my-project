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
    if(count==1)    {
        printf("true");
    }
    else    {
        printf("false");
    }
    return 0;
}
