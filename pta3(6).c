#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,disc,x,x1,x2,m,n;
	scanf("%lf %lf %lf",&a,&b,&c);
	disc=b*b-4*a*c;
    x=(-c)/b;
    x1=(-b+sqrt(fabs(disc)))/(2*a);
    x2=(-b-sqrt(fabs(disc)))/(2*a);
	if(a==0)
    {
        if(b==0)
        {
            if(c!=0)
            printf("无解");
            else
            printf("无穷多解");
        }
        else
       {
            if(c==0)
            printf("x = 0");
            else
        printf("x = %.6g",x);
       }
    }
    if(a!=0)
    {
        if(c==0)
        {
            if(b>0)
            printf("x1 = 0, x2 = %.6g",(-b)/a);
            if(b==0)
            printf("x1 = x2 = 0");
            if(b<0)
            printf("x1 = 0, x2 = %.6g",(-b)/a);
        }
        else{
            if(b!=0)
            {
        if(disc>1e-6)
            printf("x1 = %.6g, x2 = %.6g",x1,x2);
        if(fabs(disc)<=1e-6)
        printf("x1 = x2 = %.6g",x1);
        if(disc<0)
        {
            if(a>0)
        printf("x1 = %.6g+%.6gi, x2 = %.6g-%.6gi",-b/(2*a),fabs(sqrt(-disc)/(2*a)),-b/(2*a),fabs(sqrt(-disc)/(2*a)));
        if(a<0)
        printf("x1 = %.6g-%.6gi, x2 = %.6g+%.6gi",-b/(2*a),fabs(sqrt(-disc)/(2*a)),-b/(2*a),fabs(sqrt(-disc)/(2*a)));
        }
        }
        if(b==0)
        {
            if(a>0)
            printf("x1 = 0+%.6gi, x2 = 0-%.6gi",fabs(sqrt(-disc)/(2*a)),fabs(sqrt(-disc)/(2*a)));
            if(a<0)
            printf("x1 = 0-%.6gi, x2 = 0+%.6gi",fabs(sqrt(-disc)/(2*a)),fabs(sqrt(-disc)/(2*a)));
        }
    }
    }
	return 0;
	}