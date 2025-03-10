#include <stdio.h>
int main(){
int n;
printf("");
scanf("%d", &n);
    for  (int i=1; i<=n+1; i++){
    char letter ='A';
    for(int j=1; j<=n-1; j++){
        printf("%c ",letter);
        letter++;
        
    }
    printf("\n");
 }
 return 0;

}
