#include <stdio.h>
int main()
{
    int f,c;
    printf("Enter tempreture to farehite:" );
    scanf("%d", &f);

    c=(f-32)*5/9;

    printf("%d",c);
    return 0;
}