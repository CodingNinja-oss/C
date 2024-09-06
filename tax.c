#include <stdio.h>
int main()
{
    float income,tax;
    printf("Enter tax amount: ");
    scanf("%f",&income);
    if(income>=30)
      {
        tax=0.25*30;
        printf("income after tax is %f",income-tax);
      }
    else if(income>=15)
    {
        tax=0.15*15;
         printf("income after tax is %f",income-tax);    
    }
    else if(income>=10)
    {
        tax=0.8*10;
         printf("income after tax is %f",income-tax);    
    }
    else if(income>=15)
    {
        tax=0.5*6;
         printf("income after tax is %f",income-tax);    
    }
    else
     printf("Income is %f" ,income);
     return 0;

}