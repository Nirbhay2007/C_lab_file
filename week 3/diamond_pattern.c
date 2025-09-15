#include <stdio.h>

int main() {
    int rows = 5;
    
    printf("Diamond Pattern:\n");
    
    // Upper half of diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars (only at edges for hollow diamond)
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    // Lower half of diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces before stars
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars (only at edges for hollow diamond)
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
