#include<stdio.h>

int timer(int chicken_num, int money){
    int sum = 0;
    for(int i = 1; i <= chicken_num; i++){
        for(int j = 1; j < chicken_num; j++){
            for(int k = 1; k < chicken_num; k++){
                if(i+j+k == chicken_num && i*5+3*j+k/3 == money && k%3 == 0){
                    sum++;
                }
            }
        }
    }
    return sum;
}


int cal_chicken(int chicken_num, int money){
    for(int i = 1; i <= chicken_num; i++){
        for(int j = 1; j < chicken_num; j++){
            for(int k = 1; k < chicken_num; k++){
                if(i+j+k == chicken_num && i*5+3*j+k/3 == money && k%3 == 0){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int chicken_num;
        int money;
        scanf("%d%d", &chicken_num, &money);
        printf("%d\n", timer(chicken_num, money));
        cal_chicken(chicken_num, money);
    }
}