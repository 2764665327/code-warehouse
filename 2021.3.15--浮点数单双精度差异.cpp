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
	printf("%30.20f %30.20lf",a,b);//��δָ����ʽ������Ĭ�ϵ�˫���Ⱦ�Ϊ��λС�� ,floatΪ6-7λ��Ч����֮��Ϊ�������֣�doubleΪ15λ֮��ҲΪ�������� 
	return 0;
}
