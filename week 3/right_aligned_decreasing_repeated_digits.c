#include <stdio.h>

int main() {
    int rows = 5;
    
    printf("Right-aligned Decreasing Repeated Digits:\n");
    
    for (int i = rows; i >= 1; i--) {
        // Print spaces for right alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print repeated digit
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    
    return 0;
}
