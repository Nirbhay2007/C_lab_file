#include <stdio.h>

int x = 100; // Global variable

void displayValues() {
    int x = 50; // Local variable with same name
    printf("Inside function - Local x: %d\n", x);
}

void displayGlobalValue() {
    printf("Inside displayGlobalValue - Global x: %d\n", x);
}

int main() {
    printf("Outside function - Global x: %d\n", x);
    
    displayValues();
    displayGlobalValue();
    
    int x = 25; // Local variable in main
    printf("In main function - Local x: %d\n", x);
    
    return 0;
}