#include<stdio.h>
#include <stdlib.h>

int reverse(int n) 
{
    int rn=0;
    while(n) 
    {
        rn=rn*10+n%10;
        n=n/10;
    }
    return rn;
}

int main() 
{
    int count=0;
    int a,b,k,i;
    scanf("%d%d%d",&a,&b,&k);

    for(i=a;i<=b;i++)
    {
        if(abs(i - reverse(i))%k==0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
    
