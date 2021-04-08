#include <stdio.h>
int main()
{
    int goal,i,j,m,n,p,q,l,b[100];
	char a[100][30];
	 scanf("%d %d\n",&i,&j);
     for(m=0;m<j;m++)
     {
          scanf("%s",a[m]);
           goal=1;
         for(n=0;n<i;n++)
         {
             q=1;
             if(a[m][n]=='n')
             {
                 for(p=1;p<=i-n-1;p++)
             {
                 q=q*2;
             }
             goal=goal+q;
             }
             else ;
         }
         b[m]=goal;
     }
     for(l=0;l<m;l++)
     {
         printf("%d\n",b[l]);
     }
   return 0;
}