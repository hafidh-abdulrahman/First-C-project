Online C compiler to run C program online
#include <stdio.h>
int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;
    
    //input two integers 
    printf("Enter Two Integers:");
    scanf("%d %d", &num1, &num2);
    
    //perform Arithmetic Operation
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = (float)num1/num2;
    
    //Display The Result
    printf("The sum: %d\n", sum);
    printf("The difference: %d\n", difference);
    printf("The product: %d\n", product);
    printf("The quotient: %.2f\n", quotient);
    
    
    return 0;
}

