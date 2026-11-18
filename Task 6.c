#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int choice, number, decimal;
    int remainder, i;
    char binary[65], hex[65];
    char input[65];

    printf("===== NUMBER CONVERTER =====\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Hexadecimal\n");
    printf("4. Hexadecimal to Decimal\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter decimal number (0 or greater): ");
            scanf("%d", &number);

            if (number < 0) {
                printf("Invalid input!\n");
                break;
            }

            if (number == 0) {
                printf("Binary: 0\n");
                break;
            }

            i = 0;
            while (number > 0) {
                binary[i++] = (number % 2) + '0';
                number /= 2;
            }

            printf("Binary: ");
            while (i > 0)
                printf("%c", binary[--i]);
            printf("\n");
            break;

        case 2:
            printf("Enter binary number: ");
            scanf("%64s", input);

            decimal = 0;
            for (i = 0; input[i] != '\0'; i++) {
                if (input[i] != '0' && input[i] != '1') {
                    printf("Invalid binary number!\n");
                    return 0;
                }
                decimal = decimal * 2 + (input[i] - '0');
            }

            printf("Decimal: %d\n", decimal);
            break;

        case 3:
            printf("Enter decimal number (0 or greater): ");
            scanf("%d", &number);

            if (number < 0) {
                printf("Invalid input!\n");
                break;
            }

            if (number == 0) {
                printf("Hexadecimal: 0\n");
                break;
            }

            i = 0;
            while (number > 0) {
                remainder = number % 16;
                hex[i++] = remainder < 10
                    ? remainder + '0'
                    : remainder - 10 + 'A';
                number /= 16;
            }

            printf("Hexadecimal: ");
            while (i > 0)
                printf("%c", hex[--i]);
            printf("\n");
            break;

        case 4:
            printf("Enter hexadecimal number: ");
            scanf("%64s", input);

            decimal = 0;
            for (i = 0; input[i] != '\0'; i++) {
                char c = toupper((unsigned char)input[i]);
                int value;

                if (c >= '0' && c <= '9')
                    value = c - '0';
                else if (c >= 'A' && c <= 'F')
                    value = c - 'A' + 10;
                else {
                    printf("Invalid hexadecimal number!\n");
                    return 0;
                }

                decimal = decimal * 16 + value;
            }

            printf("Decimal: %d\n", decimal);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
