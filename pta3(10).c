#include <stdio.h>
int main()
{
    int a,b,i,c[10],m=0;
        scanf("%d",&a);
        b=a;
        if(b==0)
        printf("ling");
        if(b<0)
        {
        printf("fu ");
        a=-a;
        b=-b;
        }
        if(b>0)
        {
        while (a>0)
        {
            a=a/10;
            m=m+1;
        }
            while(b>0)
        {
            for(i=0;i<m;i++)
        {
            c[i]=b%10;
            b=b/10;
        }
        }
        for(i=i-1;i>0;i--)
        {
        switch(c[i])
        {
        case 0:printf("ling "); break;
        case 1:printf("yi "); break;
        case 2:printf("er "); break;
        case 3:printf("san "); break;
        case 4:printf("si "); break;
        case 5:printf("wu "); break;
        case 6:printf("liu "); break;
        case 7:printf("qi "); break;
        case 8:printf("ba "); break;
        case 9:printf("jiu "); break;
        }
        }
        switch(c[0])
        {
        case 0:printf("ling"); break;
        case 1:printf("yi"); break;
        case 2:printf("er"); break;
        case 3:printf("san"); break;
        case 4:printf("si"); break;
        case 5:printf("wu"); break;
        case 6:printf("liu"); break;
        case 7:printf("qi"); break;
        case 8:printf("ba"); break;
        case 9:printf("jiu"); break;
        }
        }
   return 0;
}