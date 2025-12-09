#include <stdio.h>

void tran(char *str, char *key, char *result){
    char *p = str;
    char *q = key;
    char *s = result;

    while(*p != '\0'){
        if(*q == '\0'){
            q = key;
        }
        char _result = *p + *q - '0';
        if((_result > 'Z' && *p < 'Z' )|| (_result > 'z' && *p < 'z')){
            _result -= 26;
        }
        *s = _result;
        p++;
        q++;
        s++;
    }
    *s = *p;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char str[100];
        char key[100];
        char result[100];
        scanf("%s", str);
        scanf("%s", key);
        tran(str, key, result);
        printf("%s\n", result);
    }
}