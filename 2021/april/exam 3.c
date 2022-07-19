#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int fail=0;
    for(int i=1;i<=N;i++)
    {
        int mark;
        scanf("%d",&mark);
        if(mark<M)
            fail++;
    }
    float fail_percentage;
     printf("%d\n",fail);
    fail_percentage=(float)(fail*100)/N;
    printf("%f\n",fail_percentage);
    return 0;
}
