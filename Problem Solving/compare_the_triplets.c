#include<stdio.h>
int main()
{
    int i,j,ca=0,cb=0;
    int a[3],b[3];
    
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%d%d%d",&b[0],&b[1],&b[2]);

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            ca++;
        else if(a[i]<b[i])
            cb++;
        
    }

    printf("%d %d",ca,cb);
    return 0;

}
