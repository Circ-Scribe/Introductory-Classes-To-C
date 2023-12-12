#include <stdio.h> 

int main () {
    int num1;
    int num2;
    printf("Enter the fisrt number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    double result;
    char operator;
    printf("Enter the operand ['+', '-', '*', '/']: ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
        result = num1 + num2;
        break;
        
        case '-': 
        result = num1 - num2;
        break;
        
        case '*': 
        result = num1 * num2;
        break;
        
        case '/': 
        if (num2 != 0) {
                result = (double)num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exiting with an error code
            }
        break;
        
        default: 
        printf("Invalid Operator!");
    }
    printf("The result is: %0.2lf", result);
    return 0; 
}