#include<stdio.h>
int main() 
{
     int i, j, ltrs[26], len, max = 1; 
     char str[10000]; 
     for (i = 0; i <= 26; i++) 
     scanf("%d", &ltrs[i + 1]); 
     gets(str); 
     len = strlen(str); 
     for (j = 0; j <= len; j++) 
     { 
         if (ltrs[str[j] - '0' - 48] >= max) 
         max = ltrs[str[j] - '0' - 48]; 
    } 
         printf("%d", max * len); 
}
