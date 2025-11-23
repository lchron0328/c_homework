#include <stdio.h>

void sort_three_dims(int dims[3]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (dims[j] > dims[j+1]) {
                int temp = dims[j];
                dims[j] = dims[j+1];
                dims[j+1] = temp;
            }
        }
    }
}

int is_a_fit_in_b(int sorted_a[3], int sorted_b[3]) {
    return (sorted_a[0] <= sorted_b[0] && 
            sorted_a[1] <= sorted_b[1] && 
            sorted_a[2] <= sorted_b[2]);
}

int are_boxes_matching(int dims_a[3], int dims_b[3]) {
    sort_three_dims(dims_a);
    sort_three_dims(dims_b);

    if (is_a_fit_in_b(dims_a, dims_b) || is_a_fit_in_b(dims_b, dims_a)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int T; 
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        int box_a_dims[3]; 
        int box_b_dims[3]; 

        if (scanf("%d %d %d", &box_a_dims[0], &box_a_dims[1], &box_a_dims[2]) != 3) break; 
        if (scanf("%d %d %d", &box_b_dims[0], &box_b_dims[1], &box_b_dims[2]) != 3) break; 

        if (are_boxes_matching(box_a_dims, box_b_dims)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}