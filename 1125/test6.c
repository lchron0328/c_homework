#include<stdio.h>
#include<string.h>

int swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

void change(char s[], int len){
    int i = 0;
    int j = len -1;
    while (i < j)
    {
        swap(&s[i], &s[j]);
        i++;
        j--;
    }
}

int main(){
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    change(s, len);
    printf("%s\n", s);
}