#include<stdio.h>

int GCD(int m){
    int sum = 0;
    for(int i = 1; i < m; i++){
        if(m%i == 0){
            sum += i;
            // printf("%d\n", sum);
        }
    }
    return sum;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n;
        scanf("%d%d", &m, &n);
        if(GCD(m) == n && m != n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        // printf("%d\n", 28%2);
    }
}   