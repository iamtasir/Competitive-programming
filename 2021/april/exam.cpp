#include<stdio.h>
int main()
{
    int total_subject,total_number=0;
    printf("Enter Total subject=");
    scanf("%d",&total_subject);

    for(int i=1;i<=total_subject;i++)
    {
        int every_sub_number;
        printf("subject number %d =",i);
        scanf("%d",&every_sub_number);
        total_number+=every_sub_number;

    }
    if((total_number/total_subject)<60)
        printf("the student will get 500 taka\n");
    else
        printf("the student will get 1000 taka\n");
}
