#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Numbers between 1 and %d divisible by both 5 and 7:\n", n);
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
