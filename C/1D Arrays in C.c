#include <stdio.h>
#include <stdlib.h>

int main() {

    int sum=0,n,*arr,i;
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
            scanf("%d",arr+i);
    }

    for(i=0;i<n;i++)
    {
            sum=sum + *(arr+i);
    }
    printf("%d\n",sum);
    return 0;
}

