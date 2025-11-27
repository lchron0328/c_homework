#include<stdio.h>

int isPrime(int num){
    if(num == 1)return 0;
    for(int i = 2; i< num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int sumPrime(int a, int b){
    int sum = 0;
    for(int i = a; i<=b; i++){
        if(isPrime(i)){
            sum += i;
        }
    }
    printf("%d\n", sum);
}

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    sumPrime(m, n);
}