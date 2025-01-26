#include <stdio.h>

int main() {
    float grossSalary, netSalary;
    const float taxRate = 0.15;  //tax rate = 15%

    // Prompt the user to input the gross salary
    printf("input gross salary: ");
    scanf("%f", &grossSalary);

    // summing the net salary 
    netSalary = grossSalary - (grossSalary * taxRate);

    // Display the net salary
    printf("The net salary after 15%% tax deduction is: %.2f\n", netSalary);

    return 0;
}