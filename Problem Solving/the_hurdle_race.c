#include<stdio.h>
int main()
{
    int n,k,i,c,d,h[100];
    int max=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&h[i]);
    }
    for(i=0;i<n;i++)
    {
        if(h[i]>max)
             max=h[i];
    }
     if(max>k)
        printf("%d",max-k);
    else 
        printf("0");
    
    

}
