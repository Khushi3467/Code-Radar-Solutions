#include <stdio.h>
int main(){
int n;
printf("");
scanf("%d", &n);
 for (int i=1; i<=n;  i++){
    char letter ='A';
    for (int j=1; j<=n; j++){
        printf("%c ",letter);
        letter++;
        
    }
    printf("\n");
 }
 return 0;

}