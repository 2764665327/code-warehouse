#include <stdio.h>
int main()
{
    int n,i,a[10],b[10],c[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]<130||a[i]==0&&b[i]<129)
        {
            if(a[i]==1&&c[i]<27||a[i]==0&&c[i]<25)
            printf("duo chi yu!duo chi rou!\n");
            if(a[i]==1&&c[i]==27||a[i]==0&&c[i]==25)
            printf("duo chi yu! wan mei!\n");
            if(a[i]==1&&c[i]>27||a[i]==0&&c[i]>25)
            printf("duo chi yu! shao chi rou!\n");
        }
        if(a[i]==1&&b[i]==130||a[i]==0&&b[i]==129)
        {
            if(a[i]==1&&c[i]<27||a[i]==0&&c[i]<25)
            printf("wan mei! duo chi rou!\n");
            if(a[i]==1&&c[i]==27||a[i]==0&&c[i]==25)
            printf("wan mei! wan mei!\n");
            if(a[i]==1&&c[i]>27||a[i]==0&&c[i]>25)
            printf("wan mei! shao chi rou!\n");
        }
                if(a[i]==1&&b[i]>130||a[i]==0&&b[i]>129)
        {
            if(a[i]==1&&c[i]<27||a[i]==0&&c[i]<25)
            printf("ni li hai! duo chi rou!\n");
            if(a[i]==1&&c[i]==27||a[i]==0&&c[i]==25)
            printf("ni li hai! wan mei!\n");
            if(a[i]==1&&c[i]>27||a[i]==0&&c[i]>25)
            printf("ni li hai! shao chi rou!\n");
        }
    }
    return 0;
}
