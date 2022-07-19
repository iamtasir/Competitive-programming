#include<stdio.h>
int main()
{
    int a,b,rem,temp,sum=0,i;
    printf("Enter start number:");
    scanf("%d",&a);
    printf("Enter end number:");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
     {
         temp=i;
         while(temp!=0)
         {
             rem=temp%10;
             sum=sum+rem*rem*rem;
             temp=temp/10;

         }
         if(sum==i){
            printf("%d\n",i);
     }
     sum=0;

     }
     return 0;









}







