#include <stdio.h>

int main() {
    int choice;
    double a, b;
    char again;

    do {
        printf("\n===== BASIC CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice!\n");
        } else {
            printf("Enter first number: ");
            scanf("%lf", &a);

            printf("Enter second number: ");
            scanf("%lf", &b);

            switch (choice) {
                case 1:
                    printf("Result = %.2lf\n", a + b);
                    break;
                case 2:
                    printf("Result = %.2lf\n", a - b);
                    break;
                case 3:
                    printf("Result = %.2lf\n", a * b);
                    break;
                case 4:
                    if (b == 0)
                        printf("Cannot divide by zero!\n");
                    else
                        printf("Result = %.2lf\n", a / b);
                    break;
            }
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("Thank you!\n");
    return 0;
}