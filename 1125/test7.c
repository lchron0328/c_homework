#include<stdio.h>
#include<string.h>

#define LEN 12

int isPass(char phone[]){
    char pass[] = {"133153180181189130131132155156134135136137138182183184"};
    char prefix[4]; 

    strncpy(prefix, phone, 3);
    prefix[3] = '\0';

    for(int i = 0; i < 18*3; i += 3){
        if (strncmp(&pass[i], prefix, 3) == 0) {
            return 1;
        }
    }
    
    return 0;
}

int toShort(char number[], char short_number[]){
    int i = LEN - 5;
    int j = 1;
    short_number[0] = '6';
    while (number[i] != '\0') {
        short_number[j] = number[i];
        i++;
        j++;
    }
    short_number[j] = '\0';
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char number[LEN];
        char short_number[7];
        scanf("%s", number);
        if(isPass(number)){
            toShort(number, short_number);
            printf("%s\n", short_number);
        }
        else{
            printf("error\n");
        }
    }
    
}