#include<stdio.h>

int swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c); 
        if(a>b){
            swap(&a, &b);
        }
        if(b>c){
            swap(&b, &c);
        }
        printf("%d %d %d \n",c,b,a);
    }
    return 0;

}