#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int arr[10];
        int target;
        for(int i = 0; i<10; i++){
            scanf("%d", &arr[i]);
        }
        scanf("%d", &target);
        int found = 0;
        for(int i = 0; i<10; i++){
            if(arr[i] == target){
                printf("%d\n", i);
                found = 1;
                break;
            }
        }
        if(!found) printf("Not found\n");
    }

    
}