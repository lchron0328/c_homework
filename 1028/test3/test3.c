#include <stdio.h>
#include <math.h>
#define OUT .000001
int main(){
    int a;
    scanf("%d", &a);
    double ans0 = a, ans1, ans2;
    ans1 = .5*(ans0 + a/ans0);
    if(fabs(ans1 -ans0) <= .0001){
        printf("%f\n", ans1);
    }
    else{
        while(1){
            ans2 = .5*(ans1 + a/ans1);
            if(fabs(ans2 - ans1) <= OUT)break;
            ans1 = ans2;
        } 
        printf("%.3f\n", ans2);
    }
}