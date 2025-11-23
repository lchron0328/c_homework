#include<stdio.h>
int main(){
    int n, a, b, c;
    scanf("%d", &n);
    for(int i = 100; i < n; i++){
        a = i /100;
        b = i /10 % 10;
        c = i % 10;
        if(i == (a*a*a + b*b*b + c*c*c)){
            printf("%d\n", i);
        }
    }
}