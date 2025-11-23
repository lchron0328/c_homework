#include<stdio.h>

int main(){
    int T, n;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);

        for(int i = n; i>=0; i--){
            if(i%2 == 0){
                continue;
            }
            for(int j = 0; j < (n-i)/2; j++){
                printf(" ");
            }
            for(int k = 0; k < i; k++){
                printf("*");
            }
            printf("\n");
        }

        for(int i = 0; i < n+1; i++){
            if(i%2 == 0 || i == 1){
                continue;
            }
            for(int j = 0; j < (n-i)/2; j++){
                printf(" ");
            }
            for(int k = 0; k < i; k++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    } 
}