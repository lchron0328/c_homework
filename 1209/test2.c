#include <stdio.h>

int int_arr(int *arr, float len){
    float sum = 0;
    for(int i = 0; i < len; i++){
        sum += *(arr+i);
    }
    return sum/len;
}

char char_arr(char *str, int len){
    char max = *str;
    for(int i = 0; i < len; i++){
        if(max < *(str+i)){
            max = *(str+i);
        }
    }
    return max;
}

float float_arr(float *arr, int len){
    float min = *arr;
    for(int i = 0; i < len; i++){
        if(min > *(arr+i)){
            min = *(arr+i);
        }
    }
    return min;
}

int main(){
    int t;
    scanf("%d\n", &t);
    while(t--){
        char type;// I C F
        int n; //len
        scanf(" %c%d", &type, &n);

        switch (type)
        {
        case 'I':
            int arr_i[100];
            for(int i = 0; i < n; i++){
                scanf("%d", &(*(arr_i+i)));
            }
            printf("%d\n", int_arr(arr_i, n));
            break;

        case 'C':
            char str[100];
            for(int i = 0; i < n; i++){
                scanf(" %c", &str[i]);
            }
            printf("%c\n", char_arr(str, n));
            break;

        case 'F':
            float arr_f[100];
            for(int i = 0; i < n; i++){
                scanf("%f", &(*(arr_f+i)));
            }
            printf("%g\n", float_arr(arr_f, n));
            break;

        default:
            printf("ERROR");
            break;
        }
    }
    return 0;
}