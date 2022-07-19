#include<stdio.h>

int main()
{
    int temp1=0,temp2=0;
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       int x;
       scanf("%d",&x);
       char c;
       scanf("%c",&c);
       temp1+=abs(x);
       if(c=='+')
        temp2+=x;
       else
        temp2-=x;
   }
   printf("DISTANCE :%d\n",temp1);
   printf("DISPLACMENT :%d\n",temp2);
    return 0;

}
