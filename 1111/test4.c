#include<stdio.h>

int sel_sort(int *arr, int size){
    for(int i = 0; i<size-1; i++){
        int min = i;
        for(int j = i; j<size; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        // if(min == i){
        //     return 0;
        // }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        if(i != 0)printf("\n");
        for(int i = 0; i<size; i++){
            if(i != size-1)printf("%d ", arr[i]);
            else{printf("%d", arr[i]);}
        }
    }

}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int size;
        scanf("%d", &size);
        int arr[100];
        for(int i = 0; i<size; i++){
            scanf("%d", &arr[i]);
        }

        sel_sort(arr, size);
        if(t != 0)printf("\n");

    }
    
}