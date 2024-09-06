#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number: ");

    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a> c)
       printf("1. Maxmum num is %d", a);

        else if (b > a && b > c)

                printf("2. largeat number is %d", b);
        else 
            printf("3. Maximum number %d", c);

    return 0;
}