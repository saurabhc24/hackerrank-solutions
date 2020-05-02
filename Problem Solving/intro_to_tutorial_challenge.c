#include<stdio.h>
int main()
{
    int i,v,n,a[10000];
    scanf("%d",&v);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]==v)
        {
            printf("%d",i);
        }
    }
    return 0;
}
