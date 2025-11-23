#include <stdio.h>

int main() {
    int i;
    int budget;
    int total_money = 0;
    int mother_save = 0;
    
    const int fixed_expense = 300; 

    for (i = 1; i <= 12; i++) {
        scanf("%d", &budget);

        total_money += (fixed_expense - budget);
        
        if (total_money < 0) {
            printf("-%d\n", i);
            return 0;
        }
        
        int transfer = (total_money / 100) * 100;
        
        mother_save += transfer;
        total_money -= transfer;
    }
    
    mother_save = (int)(mother_save * 1.2); 

    int final_money = mother_save + total_money;
    
    printf("%d\n", final_money);
    
    return 0;
}