#include<stdio.h>
int main()
{
    int n,sum,i;
    printf("Enter the last number: ");
    scanf("%d",&n);
    printf("1+2+3+.....+%d\n",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    printf("Sum=%d\n",sum);
    return 0;

}
