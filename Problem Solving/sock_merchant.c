#include<stdio.h>

int main()
{
    int n,c,res=0;
    scanf("%d",&n);
    int freq[101]={0};
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&c);
        freq[c]++;
    }

    for(int i= 0 ; i<=100 ; ++i)
        res+=freq[i]/2;

    printf("%d\n",res);

    return 0;

}
