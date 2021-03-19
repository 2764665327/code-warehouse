#include <stdio.h>
int main()
{
	float a;
	double b; 
	float c=353;
	float d=7;
	double e=7;
	a=c/d;
	b=c/e;
	printf("%30.20f %30.20lf",a,b);//如未指定格式符，则默认单双精度均为六位小数 ,float为6-7位有效数字之后为错误数字，double为15位之后也为错误数字 
	return 0;
}
