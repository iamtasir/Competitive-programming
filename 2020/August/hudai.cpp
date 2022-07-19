#include<stdio.h>
int main()
{
    int m,n;
    int i;

    for(n=1;n<=4;n=n+1){
            m=0;
        for(i=1;i<=10;i++){
                m=m+n;
            printf("%d*%d=%d\n",n,i,m);

        }
    }
    return 0;
}
