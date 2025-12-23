#include<stdio.h>

typedef struct
{
    int year;
    int month;
    int day;
}Date;

int main(){
    int t;
    scanf("%d", &t);
    Date date[10];
    for(int i = 0; i < t; i++){
        scanf("%d%d%d", &date[i].year, &date[i].month, &date[i].day);
    }

    for(int i = 0; i < t - 1; i++){
        for(int j = 0; j < t - 1; j++){
            int swap = 0;
            if(date[j].year > date[j+1].year){
                swap = 1;
            }
            else if(date[j].year == date[j+1].year){
                if(date[j].month > date[j+1].month){
                    swap = 1;
                }
                else if(date[j].month == date[j+1].month){
                    if(date[j].day > date[j+1].day){
                        swap = 1;
                    }
                }
            }

            if(swap){
                Date temp = date[j];
                date[j] = date[j+1];
                date[j+1] = temp;
            }
            
        }
    }

    printf("%d-%d-%d\n", date[1].year, date[1].month, date[1].day);

    return 0;
}
