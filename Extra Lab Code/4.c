#include <stdio.h>

int main() {
    int count = 0;
    
    if (count < 5) {
        while (count < 3) {
            count++;
        }
        return count;
    }
    
    return 0;
}

/*
Question for students: Which words are keywords? Which are identifiers?

Keywords (reserved words in C):
- int
- if  
- while
- return

Identifiers (names chosen by programmer):
- main
- count

Note: 
- stdio.h is a header file name
- printf would be an identifier (function name) if used
- Numbers like 0, 5, 3 are literals/constants
*/