#include <stdio.h>
int main()
{
    int n,person=5,liked,count=0;
    scanf("%d",&n);
     while(n>0){
            liked = person / 2;
            person = liked * 3;
            count = count + liked;
            n--;
        }
        printf("%d",count);
}
