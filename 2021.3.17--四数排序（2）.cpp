#include <stdio.h>
int main()
{
	int a, b, c, d,t;
    scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>=b)
	{
		;
	}else{
		t=a;
		a=b;
		b=t;
	};
	if(a>=c){
		;
		}
	else {
		t=c;
		c=b;
		b=a;
		a=t;
	};
		if(b>=c){;
		}
		else{
			t=b;
			b=c;
			c=t;
		};
if(a>=d){
	; 
}
	else{
	t=d; 
	d=c;
	c=b;
	b=a;
	a=t;
};
if(b>=d){
	;
}
		else{
		d=t;
		d=c;
		c=b;
		b=t;
	};
		if(c>=d){
			; 
		}
		else{
			t=d;
			d=c;
			d=t;
		};

	printf("%d,%d,%d,%d\n",a,b,c,d);
	return 0;
}
