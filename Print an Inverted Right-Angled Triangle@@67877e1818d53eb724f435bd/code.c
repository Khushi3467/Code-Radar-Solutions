#include < stdio.h>
int main()
{
    int n =2;
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++)
            printf("* ");
        printf("\n");
    }
}

