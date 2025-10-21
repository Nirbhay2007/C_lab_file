#include <stdio.h>

int main() {
    int arr[100], n, maxCount = 0, mostFrequent;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find most frequent element
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        // Count occurrences of current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        // Update most frequent if current count is higher
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }
    
    printf("Most frequent element: %d (appears %d times)\n", mostFrequent, maxCount);
    
    return 0;
}