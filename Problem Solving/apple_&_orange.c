#include <stdio.h>

int main()
{
    int s,t,count1=0,count2=0;
    scanf("%d %d",&s,&t);
    int a,b;
    scanf("%d %d",&a,&b);
    int m,n;
    scanf("%d %d",&m,&n);
    int temp;
    for(int apple_i = 0; apple_i < m; apple_i++)
    {
       scanf("%d",&temp);
        if(temp+a>=s && temp+a<=t)
        {
            count1++;
        }
    }
    for(int orange_i = 0; orange_i < n; orange_i++)
    {
        scanf("%d",&temp);
        if(temp+b>=s && temp+b<=t)
        {
            count2++;
        }
    }
    printf("%d\n",count1);
    printf("%d",count2);
    return 0;
}
