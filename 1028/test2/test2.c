#include <stdio.h>
int main(){
    int n, total = 1;
    for(scanf("%d", &n); n > 1; n--){
        total = (total+1)*2;
    }
    printf("%d\n", total);
}