#include<stdio.h>

typedef struct{
    int No;
    int x;
    int y;
}Rectangle;

int sort(Rectangle *rec, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n -1; j++){
            int swap = 0;

            if(rec[j].No > rec[j+1].No){
                swap = 1;
            }
            else if(rec[j].No == rec[j+1].No){
                if(rec[j].x > rec[j+1].x){
                    swap = 1;
                }
                else if(rec[j].x == rec[j+1].x){
                    if(rec[j].y > rec[j+1].y){
                        swap = 1;
                    }
                }
            }

            if(swap){
                Rectangle temp = rec[j];
                rec[j] = rec[j+1];
                rec[j+1] = temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m;
        scanf("%d", &m);
        Rectangle rec[1000];
        for(int i = 0; i < m; i++){
            int x, y;
            scanf("%d%d%d", &rec[i].No, &x, &y);
            if(x < y){
                int temp = x;
                x = y;
                y = temp;
            }
            rec[i].x = x;
            rec[i].y = y;
        }

        sort(rec, m);

        int new_n = 0;
        for(int i = 0; i < m; i++){
            if(rec[i].x != rec[new_n].x || rec[i].y != rec[new_n].y){
                new_n++;
                rec[new_n] = rec[i];
            }
        }

        int final_count = new_n + 1;
        for(int i = 0; i < final_count; i++){
            printf("%d %d %d\n", rec[i].No, rec[i].x, rec[i].y);
        }
    }
}