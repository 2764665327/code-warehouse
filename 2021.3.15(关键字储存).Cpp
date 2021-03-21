#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	a=sizeof(char);
	b=sizeof(short);
		c=sizeof(int);
		d=sizeof(long);
		e=sizeof(float);
		f=sizeof(double);
	printf("%d %d %d %d %d %d",a,b,c,d,e,f);
	return 0;
}