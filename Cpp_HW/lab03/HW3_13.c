#include <stdio.h>

int main() {
    int year, month, day, total = 0;
    scanf("%d,%d,%d", &year, &month, &day);

    if (month < 1 || month > 12) {
        printf("data error.");
        return 0;
    }

    for (int i = 1; i < month; i++) {
        switch (i) {
            case 1: total += 31; break;
            case 2: total += 28; break;
            case 3: total += 31; break;
            case 4: total += 30; break;
            case 5: total += 31; break;
            case 6: total += 30; break;
            case 7: total += 31; break;
            case 8: total += 31; break;
            case 9: total += 30; break;
            case 10: total += 31; break;
            case 11: total += 30; break;
            case 12: total += 31; break;
        }
    }

    total += day;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        if (month > 2) {
            total += 1;
        }
    }

    int max_day;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            max_day = 31; break;
        case 4: case 6: case 9: case 11:
            max_day = 30; break;
        case 2:
            max_day = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
            break;
        default:
            printf("data error.");
            return 0;
    }

    if (day < 1 || day > max_day) {
        printf("data error.");
        return 0;
    }

    printf("It is the %dth day.", total);
    return 0;
}
