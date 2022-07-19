#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter any integar number:");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;

    }
    printf("Total number of digit:%d\n",count);

    return 0;

}
