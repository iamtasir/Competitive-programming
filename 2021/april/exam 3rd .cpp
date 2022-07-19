#include<stdio.h>
main()
{
int i=0, x=0;
for(i=1;i<=20;i++)
{
if (i % 4 == 0)
x= x+i;
else
x=x-1;
}
printf("x=%d",x);
}
