#include<stdio.h>
int main()
{
    int n;
    float sum;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(int i=3;i<=n;i+=2)
    {
        float temp=float(i*i);
        sum+=(1.0/temp);
    }
    printf("Sum=%f\n",sum);

}

