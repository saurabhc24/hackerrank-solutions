#include<stdio.h>
int main()
{
    int n,k,i,j,a,ar[100],count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1;j<n;j++)
        {
            if (i < j)
            {
                a = ar[i] + ar[j];
                if (a % k == 0)
                {
                   count++;
                }
            }
        }
    }
    printf("%d",count);

}
