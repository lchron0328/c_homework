#include<stdio.h>

int main(){
    int arr[10];
    int avg, sum = 0, count = 0;
    for(int i = 0; i<10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum/10;
    for(int i = 0; i<10; i++){
        if(arr[i] > avg){
            count++;
        }
    }
    printf("%d\n", count);
}