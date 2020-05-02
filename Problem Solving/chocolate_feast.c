#include<stdio.h>
int main()
{
    int t,n,c,m,i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&c,&m);
        int choc = n/c;      //chocolate bought by money
        int wrap = choc;     // wrapper from chocolate

        while(wrap>=m)
        {
            int ex_choc = wrap/m;
            wrap = ex_choc + wrap % m;
            choc += ex_choc;
        }
        printf("%d\n",choc);
    }
    return 0;
}
