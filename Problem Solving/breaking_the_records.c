#include <stdio.h>
int main()
{
    long int score[2000],n,i,j,low=0,high=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld", &score[i]);
    } 
    high=score[0];
    for(i=0;i<n;i++)
    {
        for(j=1;j<n+1;j++)
        {
           if(high<score[j])
           {   
               high=score[j];
               low=low+1;
           }
        }    
    }
    printf("%ld", low);
     low=0; 
     high=score[0];
     for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(high>score[j])
           {   
               high=score[j];
               low=low+1;
            }
        }
        }
    printf("% ld", low);
    return 0;
}
