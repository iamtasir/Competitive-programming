#include<stdio.h>
int main()
{
    int n,rem,sum,temp;
    printf("Enter number:");
    scanf("%d",&n);
    sum=0;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;


    }
    printf("Sum=%d\n",sum);
    return 0;


}
