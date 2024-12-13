#include <stdio.h>

struct StudentInfo{
    char name[20];
    int s_id;
    float mark;
}std_1;     

struct TeacherInfo{
    char name[20];
    int t_id;
    float salary;
};

int main(){
    struct StudentInfo std_1 = {"Student_1", 2179, 92.90}, 
    std_2 = {.s_id=3113 ,.name="Student_2", .mark=89.10};
    struct TeacherInfo tcr_1 = {"Teacher_1", 1201, 92000.90},
    tcr_2 = tcr_1;

    printf("Student details: %d\t - %s\t - %f\n", std_1.s_id, std_1.name, std_1.mark);
    printf("Student details: %d\t - %s\t - %f\n", std_2.s_id, std_2.name, std_2.mark);

    printf("Teacher details: %d\t - %s\t - %lf\n", tcr_1.t_id, tcr_1.name, tcr_1.salary);
    printf("Teacher details: %d\t - %s\t - %lf\n", tcr_2.t_id, tcr_2.name, tcr_2.salary);
    return 0;
}