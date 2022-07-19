#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;


    }
    printf("Sum=%d\n",sum);
    return 0;

}
