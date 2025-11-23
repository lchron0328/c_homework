#include<stdio.h>
#include<string.h>

void in_id(char id[19]){
    for(int i = 16; i>=5; i--){
        id[i+2] = id[i];
    }
    id[5] = '1';
    id[6] = '9';
}

char last_id(char id[19]){
    int sum = 0;
    int coef[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char last_code[] = {"10X98765432"};
    
    for(int i = 0; id[i] != '\0'; i++){
        // printf("%c %d\n", id[i], coef[i]);
        sum += (id[i]-'0') * coef[i];
    }
    sum %= 11;
    return last_code[sum];
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char id[19];
        scanf("%s", id);
        in_id(id);
        id[17] = last_id(id);
        id[18] = '\0';
        printf("%s\n", id);

    }
    
}