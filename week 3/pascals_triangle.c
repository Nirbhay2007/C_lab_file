#include <stdio.h>

int main() {
    int rows = 4;
    
    printf("Pascal's Triangle:\n");
    
    for (int i = 0; i < rows; i++) {
        // Print spaces for centering
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        
        // Calculate and print numbers
        int number = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    
    return 0;
}
