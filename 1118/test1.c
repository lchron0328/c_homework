#include<stdio.h>

#define MAX_SIZE 100

int solve(){
    int a, b;
    int arr[MAX_SIZE][MAX_SIZE];
    scanf("%d%d", &a, &b);
    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int found = 0;
    for(int i = 0; i<a; i++){
        int row_max_val = 0;
        for(int j = 0; j<b; j++){
            if(arr[i][j] > row_max_val){
                row_max_val = arr[i][j];
            }
        }

        for(int j = 0; j<b; j++){
            if(arr[i][j] == row_max_val){
                int col_min_val = 100;
                for(int k = 0; k<a;k++){
                    if(arr[k][j] < col_min_val){
                        col_min_val = arr[k][j];
                    }
                }

                if(arr[i][j] == col_min_val){
                    printf("%d %d\n", i, j);
                    found = 1;
                    return 0;
                }

            }
        }
    }
    if(found == 0){
        printf("-1\n");
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}