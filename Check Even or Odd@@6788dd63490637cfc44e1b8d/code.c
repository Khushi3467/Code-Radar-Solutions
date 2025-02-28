#include <stdio.h>

int main() {
    int number;

    printf(" ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d even .\n");
    } else {
        printf("%d  odd .\n");
    }

    return 0;
}
