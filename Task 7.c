#include <stdio.h>

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

int main() {
    struct Account accounts[50];
    int count = 0;
    int choice, number, i, found;
    float amount;

    do {
        printf("\n===== BANKING SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Display Accounts\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= 50) {
                    printf("Account limit reached!\n");
                    break;
                }

                printf("Enter account number: ");
                scanf("%d", &accounts[count].accountNumber);

                printf("Enter customer name: ");
                scanf(" %49[^\n]", accounts[count].name);

                accounts[count].balance = 0;
                printf("Account created successfully!\n");
                count++;
                break;

            case 2:
                printf("Enter account number: ");
                scanf("%d", &number);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNumber == number) {
                        printf("Enter deposit amount: ");
                        scanf("%f", &amount);

                        if (amount > 0) {
                            accounts[i].balance += amount;
                            printf("Deposit successful!\n");
                        } else {
                            printf("Invalid amount!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 3:
                printf("Enter account number: ");
                scanf("%d", &number);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNumber == number) {
                        printf("Enter withdrawal amount: ");
                        scanf("%f", &amount);

                        if (amount > 0 && amount <= accounts[i].balance) {
                            accounts[i].balance -= amount;
                            printf("Withdrawal successful!\n");
                        } else {
                            printf("Invalid amount or insufficient balance!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 4:
                printf("Enter account number: ");
                scanf("%d", &number);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (accounts[i].accountNumber == number) {
                        printf("Customer: %s\n", accounts[i].name);
                        printf("Balance: Rs. %.2f\n", accounts[i].balance);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Account not found!\n");
                break;

            case 5:
                for (i = 0; i < count; i++) {
                    printf("\nAccount Number: %d\n",
                           accounts[i].accountNumber);
                    printf("Name: %s\n", accounts[i].name);
                    printf("Balance: Rs. %.2f\n",
                           accounts[i].balance);
                }

                if (count == 0)
                    printf("No accounts available.\n");
                break;

            case 6:
                printf("Thank you for using the banking system!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
