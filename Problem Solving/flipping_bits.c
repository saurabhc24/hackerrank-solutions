#include <stdio.h>
int main()
{
    int n;
    unsigned int q;
    
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&q);
        printf("%u\n",~q);
    }
    return 0;
}
