#include<stdio.h>

typedef struct{
    double x;
    double y;
}Point;

typedef struct 
{
    Point p1;
    Point p2;
    double k;
    double b;
}Line;

float min(float a, float b) { return a < b ? a : b; }
float max(float a, float b) { return a > b ? a : b; }

double cal_k(Line line){
    return (line.p2.y - line.p1.y)/(line.p2.x - line.p1.x);
}
double cal_b(Line line){
    return (line.p1.y - line.k * line.p1.x);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        Line l1;
        Line l2;

        scanf("%lf %lf %lf %lf", &l1.p1.x, &l1.p1.y, &l1.p2.x, &l1.p2.y);
        scanf("%lf %lf %lf %lf", &l2.p1.x, &l2.p1.y, &l2.p2.x, &l2.p2.y);

        int line1_v = (l1.p1.x == l1.p2.x);
        int line2_v = (l2.p1.x == l2.p2.x);

        if(line1_v || line2_v){//垂直
            if (l1.p1.x != l2.p1.x) {
                printf("disjoint\n");
            } else {
                if (max(l1.p1.y, l1.p2.y) < min(l2.p1.y, l2.p2.y) || 
                    max(l2.p1.y, l2.p2.y) < min(l1.p1.y, l1.p2.y)) {
                    printf("disjoint\n");
                } else {
                    printf("intersect\n");
                }
            }
        }
        else{

            l1.k = cal_k(l1);
            l2.k = cal_k(l2);
            l1.b = cal_b(l1);
            l2.b = cal_b(l2);

            if (l1.k == l2.k) {//平行
                printf("disjoint\n");
            }
            else {
                double inter_x = (l2.b - l1.b) / (l1.k - l2.k);

                if (inter_x >= min(l1.p1.x, l1.p2.x) && inter_x <= max(l1.p1.x, l1.p2.x) &&
                    inter_x >= min(l2.p1.x, l2.p2.x) && inter_x <= max(l2.p1.x, l2.p2.x)) {
                    printf("intersect\n");
                } 
                else{
                    printf("disjoint\n");
                }
            }
        }
    }
}