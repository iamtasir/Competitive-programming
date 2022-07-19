#include<stdio.h>
#include<math.h>
int main()
{
  int test,i;
  double Ox, Oy, Ax, Ay, Bx, By,A,B,C,c,arc;
scanf("%d",&test);
for(i=1;i<=test;i++){
    scanf("%lf%lf%lf%lf%lf%lf",&Ox,&Oy, &Ax, &Ay, &Bx, &By);
    A=sqrt(((Ox-Ax)*(Ox-Ax))+((Oy-Ay)*(Oy-Ay)));
    printf("%lf\n",A);
    C=sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
     printf("%lf",C);
    c=acos((2*A*A-C*C)/(2*A*A));
    arc=c*A;
    printf("Case %d: %lf\n",i,arc);
}
}
