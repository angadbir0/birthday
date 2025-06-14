#include<stdio.h>
void SwapTwo(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int num1, num2;
    printf("Please enter first value to swap =");
    scanf("%d", &num1);
    printf("Please enter the second value to swap =");
    scanf("%d", &num2);
    printf("\nBefore swapping: num1= %d num2 = %d\n" ,num1,num2);
    SwapTwo(&num1,&num2);
    printf("After Swapping : num1=%d num2 =%d\n",num1,num2);
}