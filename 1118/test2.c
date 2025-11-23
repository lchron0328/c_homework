#include<stdio.h>

#define MAX_SIZE 100

int solve(){
    char string[MAX_SIZE];
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
        }
        else if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }
    printf("%s\n", string);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}