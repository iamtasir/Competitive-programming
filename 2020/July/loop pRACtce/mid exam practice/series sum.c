#include<stdio.h>
#include<math.h>
int main()
{
    int number,i;
    int sum=0;
    printf("enter the maximum value of series:");
    scanf("%d",&number);
    sum=pow(((number*(number+1))/2),2);
    printf("sum of the series: ");
    for(i=1;i<=number;i++)
    {
        if(i!=number)
            printf("%d^3+",i);
        else
            printf("%d^3=%d",i,sum);

    }
    return 0;
}
