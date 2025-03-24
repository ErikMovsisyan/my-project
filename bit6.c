#include <stdio.h>
int main()  {
 char c;
 printf("enter symbol");
 scanf("%c",&c);
 if(c>='a' && c<='z')   {
     c = c ^ (1<<5);
     printf("%c\n",c);
 }
 else if(c >= 'A' && c<='Z')    {
     c = c ^ (1<<5);
     printf("%c\n",c);
}
else    {
    printf("nan\n");
}

    return 0;
}
