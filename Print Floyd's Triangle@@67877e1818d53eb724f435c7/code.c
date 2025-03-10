#include <stdio.h>
int main()
{
    int n,num=1;
    printf("");
    scanf("%d", &n);
      for (int i = 1;i <= n;i++) { 
        for (intj = 1+1;j<= i;j++) { 
            printf("%d ",num);
           num++;
        }
      
       
      printf("\n");  
       
     }
   
    return 0;
}