#include <stdio.h>

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int sort(int *arr, int len){
    for(int i = 0; i<len; i++){
        int min = i, temp;
        for(int j = i; j < len; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int find(int *arr, int len, int target){
    for(int i = 0; i < len; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void display(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);
        if (i < len - 1) {
            printf(" ");
        }
    }
}

int reverse(int *arr, int len){
    for(int i = 0; i < len; i++){
        int max = i, temp;
        for(int j = i; j < len; j++){
            if(arr[max] < arr[j]){
                max = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

int del(int *arr, int len, int index){
    arr[index] = 0;
    for(int i = index; i < len - 1; i++){
        swap(&arr[i], &arr[i+1]);
    }
    return 0;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int arr[11];
        int a;
        for(int i = 0; i<10; i++){
            scanf("%d", &arr[i]);
        }
        scanf("%d", &a);
        int index = find(arr, 10, a);
        if(a % 2 != 0 && index != -1){
            del(arr, 10, index);
            sort(arr, 9);
            display(arr, 9);
            printf("\n");
        }
        else if(a % 2 == 0 && index == -1){
            arr[10] = a;
            sort(arr, 11);
            reverse(arr, 11);
            display(arr, 11);
            printf("\n");   
        }
        else{
            int oddArr[10], evenArr[10];
            int oddCount = 0, evenCount = 0;

            for (int i = 0; i < 10; i++) {
                if (arr[i] % 2 != 0) {
                    oddArr[oddCount++] = arr[i];
                } else {
                    evenArr[evenCount++] = arr[i];
                }
            }

            reverse(oddArr, oddCount);
            reverse(evenArr, evenCount);

            if (oddCount > 0) {
                display(oddArr, oddCount);
            }
            if (oddCount > 0 && evenCount > 0) {
                printf(" ");
            }
            if (evenCount > 0) {
                display(evenArr, evenCount);
            }
            printf("\n");
        }
    
    }
}