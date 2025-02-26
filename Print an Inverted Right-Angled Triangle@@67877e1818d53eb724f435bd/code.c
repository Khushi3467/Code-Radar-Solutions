#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i=n; i>0; i--){
        for (int j=0; j<i; j++){
            printf(" ");
        }
        for (int k=0;k<1; k++);{
            printf("*");
        }
        printf("\n\n");
     }
      return 0;
    
}