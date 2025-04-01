#include<stdio.h>
#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, temp;
    printf("%d %d ", a, b);

    for (int i = 2; i < n; i++) {
        temp = a + b;
        printf("%d ", temp);
        a = b;
        b = temp;
    }
}

int main() {
    int numTerms;
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    if (numTerms < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
    } else {
        printf("Fibonacci Series: ");
        fibonacciSeries(numTerms);
    }

    return 0;
}
