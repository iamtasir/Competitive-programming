#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the last number:");
    scanf("%d",&n);
    printf("1+2+3+......+%d\n",n);
    while(i<=n)
    {
        sum=sum+i;
        i++;

    }
   printf("Sum=%d\n",sum);
   return 0;
}
