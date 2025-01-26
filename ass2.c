#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Alarming the user to input two numbers
    printf("input the start number: ");
    scanf("%d", &start);
    printf("input the end number: ");
    scanf("%d", &end);

    // Validate input
    if (start > end) {
        printf("Not Valid!!! stsrting number should be less than or equal to ending number.\n");
        return 1;
    }

    // Calculate the number of odd number
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    printf("The sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}