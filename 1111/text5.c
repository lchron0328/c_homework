#include<stdio.h>
int sort(int *arr){
    int size = 10;
    for (int i = 0; i < size-1; i++)
    {
        int* p = &arr[i];
        int* q = &arr[size-1-i];
        if(i == 5){
            break;
        }

        int temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main(){
    int arr[10];
    for(int i = 0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr);
    for(int i = 0; i<10; i++){
        if(i!=9)printf("%d ", arr[i]);
        else printf("%d", arr[i]);
    }
}