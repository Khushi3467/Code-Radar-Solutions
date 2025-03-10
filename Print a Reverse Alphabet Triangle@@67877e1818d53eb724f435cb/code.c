#include <stdio.h>
int main(){
int n;
printf("");
scanf("%d", &n);
    for  (int i=1; i<=n; i++){
    char letter ='A'; 
    for(int k=1; k<= n-i;k++)
    for(int j=1; j<=n; j++){
        printf("%c" ,letter );
    }
    printf("\n");
    }
    return 0;
}