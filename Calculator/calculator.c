#include <stdio.h>

// Function prototypes
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;
    
    // Display menu to the user
    while(1) {
        printf("\nBasic Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void add() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
}

void subtract() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 - num2;
    printf("Result: %.2lf\n", result);
}

void multiply() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 * num2;
    printf("Result: %.2lf\n", result);
}

void divide() {
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if(num2 != 0) {
        result = num1 / num2;
        printf("Result: %.2lf\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
