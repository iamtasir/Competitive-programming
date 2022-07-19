#include<stdio.h>
int main()
{
    int a,i,x=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            x++;
            break;

        }

    }
    if(x==0)
        printf("Prime number\n");

    else
        printf("Not Prime Number\n");
        return 0;

}
