#include <stdio.h>
#include <string.h>

int n;
int mat[10][10];
int temp_mat[10][10];

void print_matrix() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", mat[i][j]);
            if (j < n - 1) printf(" ");
        }
        printf("\n");
    }
}

void translate() {
    int result[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[j][i] = mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = result[i][j];
        }
    }
    print_matrix();
}

void add() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp_mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] += temp_mat[i][j];
        }
    }
    print_matrix();
}

// MULTIPLY: 矩陣相乘
void multiply() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &temp_mat[i][j]);
        }
    }
    
    int result[10][10] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += mat[i][k] * temp_mat[k][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = result[i][j];
        }
    }
    print_matrix();
}

// SUM: 計算對角線之和
void sum_diagonal() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                sum += mat[i][j];
            }
        }
    }
    printf("%d\n", sum);
}

int main() {
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    char cmd[20];

    while (1) {
        scanf("%s", cmd);
        
        if (strcmp(cmd, "OVER") == 0) {
            break;
        } else if (strcmp(cmd, "TRANSLATE") == 0) {
            translate();
        } else if (strcmp(cmd, "ADD") == 0) {
            add();
        } else if (strcmp(cmd, "MULTIPLY") == 0) {
            multiply();
        } else if (strcmp(cmd, "SUM") == 0) {
            sum_diagonal();
        }
    }
    
    return 0;
}