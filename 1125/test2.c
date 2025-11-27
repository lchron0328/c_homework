#include<stdio.h>
/********** Write your code here! **********/
int same_set(int a[],int b[],int lena,int lenb){
    for(int i = 0; i<lena; i++){
        for(int j = 0; j < lenb; j++){
            if(a[i] == b[j]){
                return 1;
            }
        }
    }
    return 0;
}



/*******************************************/
int main()
{
	int lena,lenb, i, j;
	int a[100], b[100];
	scanf("%d", &lena);
	for (i = 0; i<lena; i++)
		scanf("%d", &a[i]);
	scanf("%d", &lenb);
	for (i = 0; i<lenb; i++)
		scanf("%d", &b[i]);
	printf("%d\n", same_set(a, b, lena,lenb));
	return 0;
}