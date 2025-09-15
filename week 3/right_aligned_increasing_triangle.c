#include <stdio.h>

int main() {
    int rows = 10;
    
    printf("Right-aligned Increasing Triangle:\n");
    
    for (int i = 1; i <= rows; i++) {
        // Print spaces for right alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
