#include<stdio.h>
#include<math.h>

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
        sum=sum+pow(rem,3);
        temp=temp/10;

    }
    if(sum==n)
        printf("armostrong\n");
    else
        printf("Not armostrong");
    return 0;

}

