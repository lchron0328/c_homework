#include<stdio.h>
int rec(int n){
    if(n <= 0){
        return 1;
    }
    return n*rec(n-1);
}

int cal_c(int m, int n){
    return(rec(m)/(rec(n)*rec(m-n)));
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n;
        scanf("%d%d", &m, &n);
        printf("%d\n", cal_c(m, n));
    }
}