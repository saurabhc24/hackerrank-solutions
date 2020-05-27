#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
    float num1,num2;
    int sum1=0,dif1=0;
    float sum2=0,dif2=0;
    scanf("%d%d\n",&n1,&n2);
    sum1=n1+n2;
    dif1=n1-n2;
    printf("%d %d\n",sum1,dif1);

    scanf("%f%f",&num1,&num2);
    sum2=num1+num2;
    dif2=num1-num2;
    printf("%.1f %.1f",sum2,dif2);
    
    return 0;
}
