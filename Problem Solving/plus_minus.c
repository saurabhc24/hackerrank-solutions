#include <stdio.h>
int main()
{
    int a[100],n,i,pc=0,nc=0,zc=0;
    float a1,a2,a3;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            pc++;
        else if(a[i]<0)
            nc++;
        else
            zc++;
    }   
      printf("%.5f\n%.5f\n%.5f",(float)pc/n,(float)nc/n,(float)zc/n);
    return 0;
  
}
