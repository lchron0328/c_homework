#include<stdio.h>
int fle(int n){
    int pre_ans = 1;
    int pre_pre_ans = 0;
    int temp = 0;
    for(int i = 1; i<n; i++){
        temp = pre_ans;
        pre_ans = pre_ans + pre_pre_ans;
        pre_pre_ans = temp;
        // printf("%d %d %d\n", i, pre_ans, pre_pre_ans);
    }
    printf("%d\n", pre_ans);
}

int main(){
    int num;
    scanf("%d", &num);
    fle(num);
}