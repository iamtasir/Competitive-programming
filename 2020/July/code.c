#include<stdio.h>
#include<string.h>
int main()
{
    int n;scanf("%d",&n);
    int a=0,b=1;
int     sum=0;
    for(int  i=2;i<=n;i++)
    {
        int temp=a+b,temp2=temp+b;
        int ans=(temp*temp2)*i;
        if(i%2==0)
            sum-=ans;
        else
            sum+=ans;
        a=temp,b=temp2;
      ///  printf("%d %d\n",a,b);
    }
    printf("%d",sum);
}
