#include<stdio.h>

struct child{
    int age;
    char sname[20];
};

struct parent{
    int age;
    char pname[20];
    struct child c1;
};

int main(){
    struct child c1 = {10, "Child_1"};
    struct parent p1 = {30, "Parent_1", c1};
    struct parent p2 = {35, "Parent_2", 15, "Child_2"};
    printf("%d %s %d %s\n", p1.age, p1.pname, p1.c1.age, p1.c1.sname); 
    printf("%d %s %d %s\n", p2.age, p2.pname, p2.c1.age, p2.c1.sname); 
}










