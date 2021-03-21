/*#include <stdio.h>
int main()
{
    printf("***********************\n* Zhi Jing Ying Xiong *\n*     Chen Hongjun    *\n*     Wang Zhuoran    *\n*       Qi Fabao      *\n*     Xiao Siyuan     *\n*     Chen Xiangrong  *\n***********************");
    return 0;
}|*/
/*#include <stdio.h>
int main()
{
    printf("Welcome to You!");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    printf("* * * *\n * * *\n  * *\n   *");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    printf("[1] Select crisps\n[2] Select popcorn\n[3] Select chocolate\n[4] Select cola\n[0] Exit\n");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    float a,d;
    int b;
    char c;
    scanf("%f %d %c %f",a,b,c,d);
    printf("%c %d %.2f %.2f",c,b,a,d);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int C,F;
    scanf("%d",&F);
	C=5*(F-32)/9;
    printf("Celsius = %d",C);
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d",&a,&b);
        c=a+b;
        d=a-b;
        e=a*b;
        f=a/b;
        g=a%b;
    printf("5 + 3 = %d\n5 - 3 = %d\n5 * 3 = %d\n5 / 3 = %d\n5 %% 3 = %d",c,d,e,f,g);
    return 0;
}*/
/*# include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);	
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b);
	return 0;
}*/
# include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%02d%02d %02d%02d",&a,&b,&c,&d);
    if(d>=b){
        e=c-a;
        f=d-b;
        printf("%02d:%02d",e,f);
    }
    else {
        e=c-a-1;
        f=d-b+60;
        printf("%02d:%02d",e,f);
    };
	return 0;
}
