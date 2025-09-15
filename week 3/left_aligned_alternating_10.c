#include <stdio.h>

int main() {
    int rows = 7;
    
    printf("Left-aligned Alternating 1s and 0s:\n");
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("10");
        }
        printf("\n");
    }
    
    return 0;
}
