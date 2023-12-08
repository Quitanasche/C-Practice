#include <stdio.h>

// Function for addition
double add(double a, double b) {
     return a + b;
}

// Function for subtraction
double subtract(double a, double b) {
     return a - b;
}

// Function for multiplication
double multiply(double a, double b) {
     return a * b;
}

// Function for division
double divide(double a, double b) {
     if (b == 0) {
         printf("Error: Division by zero is not allowed.\n");
         return 0;
     }
     return a/b;
}

int main() {
     char operation;
     double operand1, operand2, result;

     printf("Enter an arithmetic operation (+, -, *, /): ");
     scanf(" %c", &operation);

     printf("Enter two operands: ");
     scanf("%lf %lf", &operand1, &operand2);

     switch (operation) {
         case '+':
             result = add(operand1, operand2);
             break;
         case '-':
             result = subtract(operand1, operand2);
             break;
         case '*':
             result = multiply(operand1, operand2);
             break;
         case '/':
             result = divide(operand1, operand2);
             break;
         default:
             printf("Error: Invalid operation.\n");
             return 1; // Return a non-zero value to indicate an error
     }

     printf("Result: %lf\n", result);

     return 0;
}
