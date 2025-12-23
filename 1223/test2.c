#include <stdio.h>
#include <string.h>
typedef struct 
{
    char number[10];
    char name[20];
    int class_a;
    int class_b;
    int class_c;
    int total_score;
}Student;

typedef struct
{
    double class_a;
    double class_b;
    double class_c;
}Class;

void __str__(Student student){
    printf("%s %s %d %d %d", student.number, student.name, student.class_a, student.class_b, student.class_c);
}

int class_sum(Student student){
    return student.class_a + student.class_b + student.class_c;
}

double class_avg(double sum, int n){
    return sum/n;
}

int main(){
    int t;
    scanf("%d", &t);
    Student student[10];
    Class class = {0, 0, 0};
    int high_student = 0;

    for(int i = 0; i < t; i++){
        scanf("%s %s %d %d %d", student[i].number, student[i].name, &student[i].class_a, &student[i].class_b, &student[i].class_c);
        student[i].total_score = class_sum(student[i]);
    }

    for(int i = 0; i < t; i++){
        class.class_a += student[i].class_a;
        class.class_b += student[i].class_b;
        class.class_c += student[i].class_c;

        if(student[high_student].total_score < student[i].total_score){
            high_student = i;
        }  
    }

    printf("%.0f %.0f %.0f\n", class_avg(class.class_a, t), class_avg(class.class_b, t), class_avg(class.class_c, t));
    __str__(student[high_student]);

}
