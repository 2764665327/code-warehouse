#include <stdio.h>
int main()
{
	char goal;
	scanf("%c",&goal);
	
	switch(goal)
	{
		case ('a'):printf("goal>=90");break;
		case ('b'):printf("80<=goal<=90");break;
		case ('c'):printf("70<=goal<=80");break;
		case ('d'):printf("60<=goal<=70");break;
		case ('f'):printf("goal<60");
	};
	return 0;
 } 
