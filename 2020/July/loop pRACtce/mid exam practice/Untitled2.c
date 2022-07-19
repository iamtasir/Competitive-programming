#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    //int num1,num2;
    //printf("Enter the two number:");
    //scanf("%d%d",&num1,&num2);
    int result=sum(5,6);

    printf("sum is %d\n",result);
    result=sum(5,7);

    printf("sum is %d",result);
    return 0;
}
