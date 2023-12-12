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
        result = num1+num2;
        break;
        
        case '-': 
        result = num1-num2;
        break;
        
        case '*': 
        result = num1*num2;
        break;
        
        case '/': 
        result = num1/num2;
        break;
    }
    printf("The result: %lf", result);
    return 0; 
}
