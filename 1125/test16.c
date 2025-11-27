#include<stdio.h>
#include<string.h>

int cal_len(char str[], int total_len){
    int word_len = 0;
    int max_word_len = 0;
    for(int i = 0; i < total_len; i++){
        if(i != '\0' || i != ' '){
            word_len++;
        }
        else{
            if(word_len > max_word_len){
                max_word_len = word_len;
            }
            word_len = 0;
        }
    }
    return max_word_len;
}


int main() {
    char str[100];
    printf("Enter a sentence: ");
    // Reads all characters until a newline (\n) is encountered,
    // and discards the newline character itself.
    scanf("%[^\n]%*c", str);
    int len = strlen(str);
    printf("%d\n", cal_len(str, len));
    printf("You entered: %s\n", str);
    return 0;
}