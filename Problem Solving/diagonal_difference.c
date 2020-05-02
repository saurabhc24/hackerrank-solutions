#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum1=0,sum2=0,ad=0, diff=0;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    diff=sum1-sum2;
    ad=abs(diff);
    printf("%d",ad);

}
