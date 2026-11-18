#include <stdio.h>

int main() {
    int choice, choice2;

    printf("===== ADVENTURE GAME =====\n");
    printf("You are standing near a mysterious forest.\n");
    printf("You see two paths.\n");
    printf("1. Enter the forest\n");
    printf("2. Walk towards a river\n");
    printf("Choose your path: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nYou entered the forest.\n");
        printf("You find a cave and a treasure chest.\n");
        printf("1. Enter the cave\n");
        printf("2. Open the treasure chest\n");
        printf("Choose: ");
        scanf("%d", &choice2);

        if (choice2 == 1) {
            printf("\nYou found a hidden passage!\n");
            printf("Congratulations! You discovered a secret treasure.\n");
        } else if (choice2 == 2) {
            printf("\nYou found gold and jewels!\n");
            printf("You win the adventure!\n");
        } else {
            printf("Invalid choice. The adventure ends.\n");
        }

    } else if (choice == 2) {
        printf("\nYou reached the river.\n");
        printf("You see a boat and a bridge.\n");
        printf("1. Take the boat\n");
        printf("2. Cross the bridge\n");
        printf("Choose: ");
        scanf("%d", &choice2);

        if (choice2 == 1) {
            printf("\nYou crossed the river safely by boat.\n");
            printf("You discovered a beautiful island. You win!\n");
        } else if (choice2 == 2) {
            printf("\nYou crossed the bridge and reached a village.\n");
            printf("Your adventure is complete!\n");
        } else {
            printf("Invalid choice. The adventure ends.\n");
        }

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}