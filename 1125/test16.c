#include<stdio.h>
#include<string.h>

int MaxLenWord(char str[]){
    int word_len = 0;
    int max_word_len = 0;
    int i = 0;
    while(1){
        if(str[i] != '\0' && str[i] != ' '){
            word_len++;
        }
        else{
            if(word_len > max_word_len){
                max_word_len = word_len;
            }
            word_len = 0;
            if(str[i] == '\0')break;
        }
        i++;
    }
    
    i = 0;
    word_len = 0;

    int wordStart = 0;
    int firstPrint = 1;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word_len++;
        } else {
            if (word_len == max_word_len) {
                if (!firstPrint) {
                    printf(" ");
                }
                
                for (int k = 0; k < word_len; k++) {
                    printf("%c", str[wordStart + k]);
                }
                
                firstPrint = 0;
            }
            
            word_len = 0;
            wordStart = i + 1;

            if (str[i] == '\0') break;
        }
        i++;
    }
    printf("\n");
}


int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char str[100];
        scanf("%[^\n]%*c", str);
        MaxLenWord(str);
    }
    
    return 0;
}