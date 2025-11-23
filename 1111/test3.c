#include<stdio.h>

int binary_search(int *arr, int size, int target){
    int min = 0, max = size-1;
    while (min <= max)
    {
        int mid = min + (max - min)/2;
        if(target < arr[mid]){
            max = mid - 1;
        }
        else if(target > arr[mid]){
            min = mid + 1;
        }
        else{
            return mid;
        }
        
    }
    return min;
    
}

int put(int *arr, int n, int index, int value){
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
}

int main(){
    int arr[10];
    for(int i = 0; i<9; i++){
        scanf("%d", &arr[i]);
    }
    int size =  sizeof(arr)/sizeof(arr[0]);
    int target;

    scanf("%d", &target);
    
    int index = binary_search(arr, size, target);
    put(arr, 9, index, target);

    for(int i = 0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}