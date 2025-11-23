#include <stdio.h>
int main(){
    int a, b, c; 
    double sum = 0.0;
    scanf("%d%d%d", &a, &b, &c);
    for(int i = 0; i < a+1; i++)sum += i;
    
    for(int i = 0; i < b+1; i++)sum += i*i;

    for(float i = 1.0; i < c+1; i++)sum += (1/i);
    printf("%.2f\n", sum);
}