#include<stdio.h>

typedef struct 
{
    int year;
    int month;
    int day;
}Today;

int is_leap_year(int year){
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main(){
    Today today;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    scanf("%d %d %d", &today.year, &today.month, &today.day);
    
    for(int i = 0; i < today.month; i++){
        total_days += days_in_month[i];
    }
    total_days += today.day;

    if(is_leap_year(today.year) && today.month > 2){
        total_days++;
    }

    printf("%d\n", total_days);
}