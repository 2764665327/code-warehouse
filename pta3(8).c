#include <stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(b==0)
    d=a*2.455;
    if(b==1)
    d=a*1.26;
    if(c<d)
    printf("%.2lf T_T",d);
    if(c>d)
    printf("%.2lf ^_^",d);
    return 0;
}