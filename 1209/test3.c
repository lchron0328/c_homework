#include<stdio.h>

int str_count(char *str1, char *str2){
    char *ptr1 = str1;
    char *ptr2;
    char *temp;
    int count = 0;
    while(*ptr1 != '\0'){
        temp = ptr1;
        ptr2 = str2;
        while(*temp == *ptr2 && *ptr2 != '\0' && *temp != 0){
            temp++;
            ptr2++;
        }
        if(*ptr2 == '\0'){
            count ++;
        }
        ptr1++;
    }
    return count;
}

int main(){
    char str1[21];
    char str2[21];
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%d\n", str_count(str1, str2));
}