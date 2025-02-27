#include <stdio.h>
int main()
{

void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
       
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
   
        printf("\n");
    }
}
int main() {
    int height = 2; 
    printPyramid(height);
    return 0;

}


