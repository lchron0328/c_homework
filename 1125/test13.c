#include<stdio.h>

int move(int arr[], int output_arr[], int index, int len){
    int j = index;
    for(int i = 0; i < len; i++){
        if(j >= len){
            j = 0;
        }
        output_arr[j] = arr[i];
        j++;
    }
}

int main(){
    int n, m;
    int arr[100], output_arr[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);

    move(arr, output_arr, m, n);
    for(int i = 0; i < n; i++){
        printf("%d ", output_arr[i]);
    }
}