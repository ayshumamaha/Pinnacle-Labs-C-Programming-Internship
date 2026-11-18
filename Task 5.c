#include <stdio.h>

int isLeapYear(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int main() {
    int month, year, days, startDay;
    int monthDays[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("===== SIMPLE CALENDAR =====\n");
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid month or year!\n");
        return 0;
    }

    if (isLeapYear(year))
        monthDays[1] = 29;

    days = monthDays[month - 1];

    int y = year;
    int m = month;

    if (m < 3) {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;

    int h = (1 + (13 * (m + 1)) / 5 + k +
             k / 4 + j / 4 + 5 * j) % 7;

    startDay = (h + 6) % 7;

    printf("\n       %s %d\n", months[month - 1], year);
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    for (int i = 0; i < startDay; i++)
        printf("    ");

    for (int day = 1; day <= days; day++) {
        printf("%4d", day);

        if ((startDay + day) % 7 == 0)
            printf("\n");
    }

    printf("\n");
    return 0;
}