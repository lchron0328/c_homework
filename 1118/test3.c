#include<stdio.h>

#define MAX_SIZE 10

int solve(int n){
    int arr[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i<n; i++){
        for(int j = 0; j <n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i< n; i++){
        int col_max_val = 0;
        int col_sum = 0;
        for(int j = 0; j<n; j++){
            col_sum += arr[j][i];
            if(arr[j][i] > col_max_val){
                col_max_val = arr[j][i];
            }
        }
        printf("%d %d\n", col_max_val, col_sum);
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        solve(n);
    }
}