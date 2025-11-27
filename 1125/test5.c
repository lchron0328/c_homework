#include<stdio.h>
#include<string.h>

int remove(char s[], int len){
    int i = 0;
    int j = len -1;
    while (i < j)
    {
        if(s[i] != s[j]){
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100];
        scanf("%s", s);
        int len = strlen(s);
        if(remove(s, len)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}