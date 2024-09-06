#include <stdio.h>
int main()
{
     float ben,eng,math,phy,cam,agressive;
    float per;
    printf("Enter the number ben: ");
    scanf("%f",&ben);
    printf("Enter the number eng: ");
    scanf("%f",&eng);
    printf("Enter the number math: ");
     scanf("%f",&math);
    printf("Enter the number phy: ");
     scanf("%f",&phy);
    printf("Enter the number cam: ");
     scanf("%f",&cam);
    agressive=ben+eng+math+phy+cam;
    printf("Aggressive mrks is: %f\n",agressive);
    per=agressive/5;
    printf("Persentage: %f\n",per);
    if(per<=60)
        printf("fail %f",per);
    else if(per>90 && per<100)
      printf("persentage is %f grade is A",per);
    else if(per>80 && per<89)
      printf("persentage is %f grade is B",per);
    else if(per>70 && per<79)
      printf("persentage is %f grade is C",per);
    else if(per>60 && per<69)
      printf("persentage is %f grade is D",per);
    else if(per<60)
      printf("persentage is %f grade is Fail",per);
     return 0;

}