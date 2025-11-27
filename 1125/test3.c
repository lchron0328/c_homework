#include<stdio.h>

int isPrime(int num){
    for(int i = 2; i < num; i++){
        if(num%i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;
    int total = 0;
    scanf("%d", &num);
    for(int i = 2; i<= num; i++){
        if(!isPrime(i)){
            continue;
        }
        for(int j  = 2; j<= num; j++){
            if(!isPrime(j)){
                continue;
            }
            if(i+j == num){
                total ++;
            }
        }
    }
    printf("%d\n", total/2);
}