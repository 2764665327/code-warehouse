#include <stdio.h>
int main()
{
    int Chinese,math,i=0;
    scanf("%d %d",&Chinese,&math);
    if(Chinese<60)
    i=i+1;
    if(math<60)
    i=i+1;
    if(i==1)
    printf("1");
    else 
    printf("0");
    return 0;
}