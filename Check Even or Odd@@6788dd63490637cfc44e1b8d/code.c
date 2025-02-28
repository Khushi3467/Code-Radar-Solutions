#include <stdio.h>

int main() {
    int number;


    printf(" ");
    scanf("%d", &number);

   
    if (number % 2 == 0) {
        printf("%d  Even.\n", number);  
    } else {
        printf("%d Odd.\n", number);
    }

    return 0;
}
