#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    double balance = 5000, amount;
    double transactions[100];
    int count = 0, i;

    printf("===== ATM SIMULATOR =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied!\n");
        return 0;
    }

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transaction History\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current balance: Rs. %.2lf\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%lf", &amount);

                if (amount > 0 && count < 100) {
                    balance += amount;
                    transactions[count++] = amount;
                    printf("Deposit successful!\n");
                } else {
                    printf("Invalid amount or history full!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lf", &amount);

                if (amount > 0 && amount <= balance && count < 100) {
                    balance -= amount;
                    transactions[count++] = -amount;
                    printf("Withdrawal successful!\n");
                } else {
                    printf("Invalid amount or insufficient balance!\n");
                }
                break;

            case 4:
                printf("\nTransaction History:\n");
                if (count == 0)
                    printf("No transactions yet.\n");

                for (i = 0; i < count; i++) {
                    if (transactions[i] > 0)
                        printf("Deposit: Rs. %.2lf\n", transactions[i]);
                    else
                        printf("Withdrawal: Rs. %.2lf\n", -transactions[i]);
                }
                break;

            case 5:
                printf("Thank you for using the ATM!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
