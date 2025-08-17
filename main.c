#include <stdio.h>
int main() {
    int choice;
    float a, b, result;

    printf("Calculator Menu:\n");
    printf("1. Add\n2. Multiply\n3. Subtract\n4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Result (Addition): %.2f\n", result);
            break;

        case 2:
            result = a * b;
            printf("Result (Multiplication): %.2f\n", result);
            break;

        case 3:
            result = a - b;
            printf("Result (Subtraction): %.2f\n", result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result (Division): %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}