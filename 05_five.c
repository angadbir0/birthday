#include<stdio.h>
int main()
{
    int num1,num2;
    int sum,sub,mult,mod;
    float div;
    printf("Enter two numbers : ");
    scanf("%d%d,&num1,&num2");
    sum=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    mod=(float)num1/num2;
     printf("Sum= %d\n",sum);
     printf("Difference= %d\n", sub);
     printf("Product= %d\n",mult);
     printf("Quotient= %d\n",mod);
     return 0;

}