#include <stdio.h> 

int solve(int a, int b){
	int _arr[10][10];
    int arr[10][10];

    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            scanf("%d", &_arr[i][j]);
        }
    }

	for(int i = 0; i<a; i++){
		for(int j = 0; j <b; j++){
			arr[j][i] = _arr[i][j];
		}
	}
	
	for(int i = 0; i<b; i++){
		for(int j = 0; j <a ; j++){
			printf("%d", arr[i][j]);

            if (j < a - 1) {
                printf(" ");
            }
		}
		printf("\n");
	}
}

int main(){
	int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        solve(a, b);
    }
}