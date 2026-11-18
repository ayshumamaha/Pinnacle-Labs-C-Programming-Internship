#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("===== ONLINE QUIZ APPLICATION =====\n");
    printf("Answer the following questions.\n\n");

    printf("1. Which language is used for this project?\n");
    printf("A. Python   B. C   C. Java   D. HTML\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b')
        score++;

    printf("\n2. Which symbol ends a C statement?\n");
    printf("A. ;   B. :   C. ,   D. .\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'A' || answer == 'a')
        score++;

    printf("\n3. Which function displays output in C?\n");
    printf("A. scanf()   B. input()   C. printf()   D. print()\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c')
        score++;

    printf("\n4. Which data type stores whole numbers?\n");
    printf("A. float   B. int   C. char   D. double\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b')
        score++;

    printf("\n5. Which loop executes while a condition is true?\n");
    printf("A. if   B. switch   C. while   D. break\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'C' || answer == 'c')
        score++;

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your score: %d out of 5\n", score);

    if (score == 5)
        printf("Excellent performance!\n");
    else if (score >= 3)
        printf("Good job!\n");
    else
        printf("Keep practising!\n");

    return 0;
}
