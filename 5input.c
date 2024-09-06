#include <stdio.h>
int main()
{
    int a, b, c, d, e, count=0;
    printf("Enter  5 Input : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a<=0)
      count++;
    if (b<=0)
     count++;
    if (c<=0)
     count++;
    if (d<=0)
     count++;
    printf("The total number is less then Zero %d\n:",count);
    return 0;
}