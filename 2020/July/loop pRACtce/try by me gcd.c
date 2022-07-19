#include<stdio.h>
int main()
{
    int a,b,rem,gcd;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
        while(b!=0){
            rem=a%b;
            a=b;
            b=rem;

    }
    gcd=a;
    printf("GCD=%d\n",gcd);
    return 0;
}
