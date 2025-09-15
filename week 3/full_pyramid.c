#include <stdio.h>

int main() {
    int rows = 5;
    
    printf("Full Pyramid:\n");
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
