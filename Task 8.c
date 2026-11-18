#include <stdio.h>

int main() {
    char *products[] = {
        "Laptop", "Mobile Phone", "Headphones",
        "Keyboard", "Mouse"
    };

    float prices[] = {45000, 18000, 1500, 800, 500};
    int quantities[5] = {0};
    int choice, quantity, i;
    float total = 0;

    do {
        printf("\n===== BASIC E-COMMERCE SYSTEM =====\n");
        printf("Available Products:\n");

        for (i = 0; i < 5; i++) {
            printf("%d. %s - Rs. %.2f\n",
                   i + 1, products[i], prices[i]);
        }

        printf("6. View Cart and Checkout\n");
        printf("7. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (quantity > 0) {
                quantities[choice - 1] += quantity;
                printf("Product added to cart!\n");
            } else {
                printf("Invalid quantity!\n");
            }

        } else if (choice == 6) {
            total = 0;

            printf("\n===== SHOPPING BILL =====\n");

            for (i = 0; i < 5; i++) {
                if (quantities[i] > 0) {
                    float cost = prices[i] * quantities[i];

                    printf("%s x %d = Rs. %.2f\n",
                           products[i], quantities[i], cost);

                    total += cost;
                }
            }

            printf("--------------------------\n");
            printf("Total Amount: Rs. %.2f\n", total);

        } else if (choice == 7) {
            printf("Thank you for shopping!\n");

        } else {
            printf("Invalid choice!\n");
        }

    } while (choice != 7);

    return 0;
}
