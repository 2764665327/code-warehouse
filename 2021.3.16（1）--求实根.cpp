/*#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,e,x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	d=sqrt(b*b-4*a*c)/(2*a);
	e=-b/(2.0*a);
	x1=e+d;
	x2=e-d;
	if((b*b-4*a*c)>=0){
		if(b*b-4*a*c>0){
		printf("������%f��%f������ͬʵ��",x1,x2);
		}
		else {printf("������������ͬʵ����Ϊ%f",x1);
	}}
	else {printf("������ʵ��");
};
	return 0;
}*/
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,disc,x1,x2,p,q;
	scanf("%lf %lf %lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0){
		printf("This equation hasn't real roots\n");}
	else{
		p=-b/(2*a);
		q=sqrt(disc);
		printf("real roots is x1=%lf,x2=%lf\n",x1=p+q,x2=p-q);
	;}
	return 0;
	}
