#include <stdio.h>
int main()
{
	int a=1,b=5,c=0,d,e,f,g,h;
	d=4>2;
	e=a==8>4;
	f=b==8>4;
	g=!b&&a||c<a&&c;
	h=!b&&a||c<a&&b;
	printf("%d %d %d %d %d",d,e,f,g,h);
	return 0;
}
