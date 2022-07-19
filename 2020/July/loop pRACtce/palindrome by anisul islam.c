#include<stdio.h>
int main()
{
    int n,sum,rem,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;

    }
    if(sum==n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome");
    return 0;

}
