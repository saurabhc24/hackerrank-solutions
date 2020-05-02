#include <stdio.h>
int main()
{
    int n,k,b[100000],i,a,p,x=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(i!=k)
            x+=b[i];
    }
    x=x/2;
    scanf("%d",&p);
    if(p-x==0)
        printf("Bon Appetit");
    else 
        printf("%d",p-x);
    return 0;
}
