#include <stdio.h>
int main(){
int n;
printf("");
scanf("%d", &n);
 for (int i=1; i<=n;  j++){
    char letter ='A';
    for (int j=1; j<=i; j++ ){
        printf("%c ",letter);
        letter++;
        
    }
    printf("\n");
 }
 return 0;

}