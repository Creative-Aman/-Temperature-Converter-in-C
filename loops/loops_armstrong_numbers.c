#include <stdio.h>

int main() {
    int num, digit, sum, original;

    printf("Armstrong numbers between 1 and 500 are:\n");
    
    for (num = 1; num <= 500; num++) {
        original = num;  // Store the original number
        sum = 0;         // Reset the sum for each number

        // Calculate the sum of the cubes of the digits
        while (original > 0) {
            digit = original % 10;        // Extract the last digit
            sum += digit * digit * digit; // Cube the digit and add to sum
            original /= 10;               // Remove the last digit
        }

        // Check if the sum of cubes is equal to the original number
        if (sum == num) {
            printf("%d\n", num);          // Print the Armstrong number
        }
    }

    return 0;
}
// Armstrong numbers between 1 and 500 are:
// 1
// 153
// 370
// 371
// 407