#include <stdio.h>
int main()  {
int num, n;
  printf("Մուտքագրեք թիվը: ");
    scanf("%d", &num);

    printf("Մուտքագրեք բիթի ինդեքսը (0-ից 31): ");
    scanf("%d", &n);

    if (n < 0 || n > 31) {
        printf("Սխալ ինդեքս։ Ինդեքսը պետք է լինի 0-ից 31։\n");
    }
    else    {
    num = num &~ (1 << n);
    printf("%d\n",num);
}
    return 0;
}
