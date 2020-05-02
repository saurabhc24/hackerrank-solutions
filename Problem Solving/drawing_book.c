#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    scanf("%d",&p);
   int total = n/2;
        int right = p/2;
        int left = total - right;
        if(right < left){
            printf("%d",right);
        }
        else {
            printf("%d",left);
        }
        return 0;
}
