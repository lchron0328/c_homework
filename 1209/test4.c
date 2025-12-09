#include <stdio.h>

int check_student_score(int *score, int index){
    int *pt = score + index - 1;
    int first = 1;
    for(int i = 0; i < 3; i++){
        if(!first){
            printf(" ");
        }
        printf("%d", *pt);
        pt++;
        first = 0;
    }
    return 0;
}

int main(){
    int n;
    int score[20];
    int index;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
    }
    scanf("%d", &index);
    check_student_score(score, index);
}