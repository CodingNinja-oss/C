#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number: ");

    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
       printf("Minirmum num is %d", a);

        else if (b < a && b < c)

                printf("smallest number is %d", b);
        else 
            printf("minimum number %d", c);

    return 0;
}