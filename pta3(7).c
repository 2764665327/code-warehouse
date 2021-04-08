#include <stdio.h>
int main()
{
    int y,m,a[7]={1,3,5,7,8,10,12},b[4]={4,6,9,11},i,j;
    scanf("%d %d",&y,&m);
    for(i=0;i<7;i++)
        {
            if(m==a[i])
            printf("31");
        }
        for(j=0;j<4;j++)
        {
            if(m==b[j])
            printf("30");
        }
        if(m==2)
        {
    if(y%4==0&&y%100!=0||y%4==0&&y%400==0)
    printf("29");
    else
    printf("28");
        }
    return 0;
}