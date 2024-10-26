#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int originalNum = num; // Store the original number for display
    int allEven = 1; // Flag to check if all digits are even

    // Check each digit
    while (num > 0) {
        int digit = num % 10; // Get the last digit

        if (digit % 2 != 0) {
            allEven = 0; // Set flag to 0 if any digit is odd
            break; // No need to check further
        }

        num /= 10; // Remove the last digit
    }

    if (allEven) {
        printf("All digits of %d are even.\n", originalNum);
    } else {
        printf("Not all digits of %d are even.\n", originalNum);
    }

    return 0;
}
