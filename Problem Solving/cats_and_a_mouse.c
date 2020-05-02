
#include <stdio.h>
#include <stdlib.h>

int main(){
    int q;
    scanf("%d",&q);
    int arr[q][3];
    for(int i=0;i<q;i++){
        for(int j=0;j<3;j++){
           scanf("%d",&arr[i][j]);
        }
    }
    int s,t;
    for(int i=0;i<q;i++){
            s=abs(arr[i][0]-arr[i][2]);
            t=abs(arr[i][1]-arr[i][2]);
            if(s>t)
            printf("Cat B\n");
            else if(t>s)
            printf("Cat A\n");
            else if(t==s) 
            {
            printf("Mouse C\n");
            }
    }

    return 0;
}
