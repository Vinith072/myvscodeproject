#include <stdio.h>

int main() {
    int n, digit, sum = 0;
    
    // Prompt user for input (optional but useful)
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);
    
    // Optional: check if it's a 5-digit number
    if (n < 10000 || n > 99999) {
        printf("Please enter a 5-digit number.\n");
        return 1; // Exit with error
    }

    while (n > 0) {
        digit = n % 10;  // Get the last digit
        sum += digit;    // Add to sum
        n = n / 10;      // Remove the last digit
    }

    printf("Sum of digits: %d\n", sum);
    
    return 0;
}