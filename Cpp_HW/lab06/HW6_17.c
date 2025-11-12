# include <stdio.h>
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;  // 是闰年
    } else {
        return 0;  // 不是闰年
    }
}

int total_days(int year, int month, int day) {
    int total_days = 0;
    
    // computing years
    for (int i = 1990; i < year - 1; i++) {
        // year
        if (is_leap_year(i)) {
            total_days += 366;
        }
        else {
            total_days += 365;
        }
    }
    
    // computing months    
    int days_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int j = 1; j < month; j++) {
        total_days += days_of_month[j];
    }
    if (is_leap_year(year) && month > 2) {
        total_days++;
    }

    // computing days
    total_days += day;

    return total_days;
}


int main(){
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%d %d %d", &year, &month, &day);

    int total = total_days(year, month, day);

    int action = total % 5;
    if (action < 3) {
        printf("fishing");
    }
    else {
        printf("sleeping");
    }
}