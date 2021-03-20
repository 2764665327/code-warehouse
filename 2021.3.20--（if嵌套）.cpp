#include <stdio.h>
int main()
{
	int number;
	float cost;
	scanf("%d",&number);
	if(number>500)
		cost=0.15;
	else if(number>300)
		cost=0.1;
	else if(number>100)
		cost=0.075;
		else if(number>50)
		cost=0.05;
		else cost=0;
		printf("%f",cost);
		return 0;
}
