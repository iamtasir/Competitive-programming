#include<stdio.h>
int main()
{
    int i,j,sum=0,count=0,n,m;
    scanf("%d%d",&n,&m);
    if(n<m){

    for(i=n;i<m;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {

          if(i%j==0)
            count++;
    }
    if(count==2){
            sum+=i;
        printf("%d is prime number\n",i);
       } //else
           // printf("%d not prime\n",a);
    }
    printf("Sum=%d",sum);
       return 0;
}
else
{
        for(i=m;i<n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {

          if(i%j==0)
            count++;
    }
    if(count==2){
            sum+=i;
        printf("%d is prime number\n",i);
       } //else
           // printf("%d not prime\n",a);
    }
    printf("Sum=%d",sum);
       return 0;    for(i=n;i<m;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {

          if(i%j==0)
            count++;
    }
    if(count==2){
            sum+=i;
        printf("%d is prime number\n",i);
       } //else
           // printf("%d not prime\n",a);
    }
    printf("Sum=%d",sum);
       return 0;
}




}


