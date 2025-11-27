#include<stdio.h>

int comb(int a, int b){
    return b/10 + b%10 * 100 + a/10*10 + a%10*1000;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", comb(a, b));
}