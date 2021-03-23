/*# include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c==89||c==90){
		c=c-24;
		printf("%c",c);
	}
	else{
    printf("%c",c+2);
	}
	return 0;
}*/
/*# include<stdio.h>
# define pi 3.14159
int main()
{
	int r,h;
    float s,v;
    scanf("%d %d",&r,&h);
    s=pi*r*r;
    v=(s*h)/3;
    printf("%.2f",v);
	return 0;
}*/
/*# include<stdio.h>
int main()
{
	int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",1000*d+100*c+10*b+a);
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	if(a<100){
	b=a*8*1024;
	printf("%d",b);
	}
	else{
		;
	}
	return 0;
 }*/
/*#include <stdio.h>
int main()
{
	float x,result;
	scanf("%f",&x);
	if(x!=0){
		result=1/(2*x);
	}
	else{
		result=0;
	}
	printf("g(%.3f) = %.3f",x,result);
	return 0;
 }  */
/*#include <stdio.h>
int main()
{
	int sum(int a,int b,int c,int d);
	float average(int a,int b,int c,int d);
	int x1,x2,x3,x4;
	scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
	printf("Sum = %d; Average = %.1f",sum(x1,x2,x3,x4),average(x1,x2,x3,x4));
	return 0;
 }  
 int sum(int a,int b,int c,int d)
 {
 int p;
 p=a+b+c+d;
 return p;
 }
 
 float average(int w,int x,int y,int z)
 {
 float n;
 n=(w+x+y+z)/4.0;
 return n;
 }*/
/* #include <stdio.h>
int main()
{
	double a=1,result,initial,factor; 
	int day,i=1;
	scanf("%lf %lf %d",&initial,&factor,&day);
	if(initial>0&&day>0){
		for(i=1;i<=day;i=i+1)
		{
			a=(1+factor)*a;
		}
	result=initial*a;
}
    else{
    	;
	}
	printf("result = %.2lf",result);
	return 0;
 } */
