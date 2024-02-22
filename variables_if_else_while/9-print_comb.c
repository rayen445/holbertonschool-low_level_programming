#include <stdio.h>

int main() {
    // Loop through each single-digit number
    for (int i = 0; i <= 9; i++) {
        // Print the current number
        putchar(i + '0');
        
        // Print comma and space if it's not the last number
        if (i != 9) {
            putchar(',');
            putchar(' ');
        }
    }
    
    return 0;
}
