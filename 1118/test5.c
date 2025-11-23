#include <stdio.h> 

int solve(int N, int M){
    int arr[10][10];

    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            scanf("%d", &arr[i][j]);
        }
    }
	
	for(int i = M-1; i>=0; i--){
		for(int j = 0; j <N ; j++){
			printf("%d", arr[j][i]);

            if (j < N - 1) {
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
        int N, M;
        scanf("%d%d", &N, &M);
        solve(N, M);
    }
}