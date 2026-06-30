#include <stdio.h>

int isLeapYear(int year) {
    return ((year % 400 == 0) ||
           ((year % 4 == 0) && (year % 100 != 0)));
}

int getDays(int month, int year) {

    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if(month == 2 && isLeapYear(year))
        return 29;

    return days[month - 1];
}

int main() {

    int month, year, startDay;

    printf("Enter Month (1-12): ");
    scanf("%d",&month);

    printf("Enter Year: ");
    scanf("%d",&year);

    printf("Enter Starting Day\n");
    printf("(0=Sun,1=Mon,...6=Sat): ");
    scanf("%d",&startDay);

    int totalDays = getDays(month, year);

    printf("\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    for(int i = 0; i < startDay; i++)
        printf("    ");

    for(int day = 1; day <= totalDays; day++) {

        printf("%4d", day);

        if((day + startDay) % 7 == 0)
            printf("\n");
    }

    printf("\n");

    return 0;
}