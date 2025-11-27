#include<stdio.h>

int n, k;
int arr[100];
int used[100] = {0};

int dfs(int index, int curr_num){
    if(curr_num == k){
        return 1;
    }
    if(index == n){
        return 0;
    }
    used[index] = 1;
    if(dfs(index + 1, curr_num + arr[index])){
        return 1;
    }

    used[index] = 0;
    if(dfs(index+1, curr_num)){
        return 1;
    }

    return 0;

}

int sum_part(){
    if(dfs(0, 0)){
        printf("YES\n");
        int first = 1;
        int i;
        for(i = 0; i < n; i++){
            if(used[i]){
                if(!first){
                    printf(" ");
                }
                printf("%d", arr[i]);
                first = 0;
            }
        }
        printf("\n");
    }
    else{
        printf("NO\n");
    }

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        
        scanf("%d%d", &n, &k);
        for(int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
            used[i] = 0;
        }
        sum_part();

    }
}