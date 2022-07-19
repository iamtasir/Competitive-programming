#include<stdio.h>
int main()
{
    int n,temp,sum,rem;
    printf("Enter number:");
    scanf("%d",&n);
    sum=0;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;

    }
    printf("Reverse=%d\n",sum);
    return 0;

}
