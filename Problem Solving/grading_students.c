#include <stdio.h>
int main()
{
    int b,n,m,k[100001],u[100001],i,j,r=-1,t;
    scanf("%d%d%d",&b,&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&u[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t=k[i]+u[j];
            if(t>r&&t<=b)
            {
                r=t;
            }
        }
    }
    printf("%d",r);
    return 0;
}
