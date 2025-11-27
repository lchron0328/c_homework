#include<stdio.h>

#define LEFT_X 1
#define LEFT_Y 1
#define RIGHT_X 5
#define RIGHT_Y 5

int is_in_area(int target, int left, int right){
    if(left <= target && right >= target){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y;
        scanf("%d%d", &x, &y);
        if(is_in_area(x, LEFT_X, RIGHT_X) && is_in_area(y, LEFT_Y, RIGHT_Y)){
            printf("in\n");
        }
        else{
            printf("out\n");
        }
    }
}