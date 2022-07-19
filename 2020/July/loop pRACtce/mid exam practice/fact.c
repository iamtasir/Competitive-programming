#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int result,a;
    scanf("%d",&a);
    result=fact(a);
    printf("fact of a=%d",result);
}
