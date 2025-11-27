#include<stdio.h>
int solve(int x){
    if(x<1){
        return x;
    }
    else if(x>= 10){
        return 3*x-11;
    }
    else{
        return 2*x-1;
    }
}

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", solve(x));
}