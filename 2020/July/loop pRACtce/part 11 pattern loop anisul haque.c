#include<stdio.h>
int main()
{
    int n,j,i;
    printf("Enter N=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i*j);

        }
        printf("\n");

    }
    return 0;
}
