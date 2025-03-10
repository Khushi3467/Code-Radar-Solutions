#include <stdio.h>
int main()
{
    int n, num = 1; // Initialize 'num' to start from 1
    printf(""); // Add proper prompt message
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("%d ", num); // Print the current number
            num++; // Increment 'num' for the next number
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}

