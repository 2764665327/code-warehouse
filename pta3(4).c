#include <stdio.h>
int main()
{
int i,a[6],b=0,c=0;
int max=a[0];
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);    
    }
    max = a[0];
    for(i = 1; i < 4; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    for(i=0;i<=3;i++)
    {
    if(a[i]>=a[4]&&max-a[i]<=a[5])
    b=b+1;
        else
            c=i+1;
    }
    if(b==4) 
    printf("Normal");
    if(b==3)
    printf("Warning: please check #%d!",c);
    if(b<=2)
    printf("Warning: please check all the tires!");
    return 0;
}