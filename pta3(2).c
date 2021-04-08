#include <stdio.h>
int main()
{
    int a;
    double cost;
    scanf("%d",&a);
    if(a<0)
    printf("Invalid Value!");
    else{
    switch (a<=50&&a>=0)
    {
    case 1:cost=0.53*a; 
    printf("cost = %.2lf",cost);
        break;
    
    case 0:cost=0.53*50+(a-50)*0.58;
    printf("cost = %.2lf",cost);
        break;
    }
    }
    return 0;
} 