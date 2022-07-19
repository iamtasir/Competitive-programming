#include<stdio.h>
int main()
{
    int n,reverse=0,rem=0,digit=0;
    printf("Enter thr number :");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
        digit++;

}
printf("reverse is=%d\n",reverse);
printf("Digit=%d\n",digit);

}

