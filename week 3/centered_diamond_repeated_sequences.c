#include <stdio.h>

int main() {
    int rows = 11;
    int max_width = 6;
    
    printf("Centered Diamond of Repeated Sequences:\n");
    
    // Upper half of diamond
    for (int i = 1; i <= max_width; i++) {
        // Print spaces for centering
        for (int j = 1; j <= max_width - i; j++) {
            printf(" ");
        }
        // Print repeated sequence
        for (int repeat = 1; repeat <= 2; repeat++) {
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    
    // Lower half of diamond
    for (int i = max_width - 1; i >= 1; i--) {
        // Print spaces for centering
        for (int j = 1; j <= max_width - i; j++) {
            printf(" ");
        }
        // Print repeated sequence
        for (int repeat = 1; repeat <= 2; repeat++) {
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    
    return 0;
}
