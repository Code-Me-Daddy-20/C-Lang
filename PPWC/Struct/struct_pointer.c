#include <stdio.h>

struct Pointer{
    int p1; char p2;
};

typedef struct Pointer2{
    int mem1; int mem2;
    struct Pointer2* next;
}Pointer2;

int main(){
    // struct Pointer p = {10, 'A'};
    // struct Pointer* ptr = &p;
    // printf("Pointer to p1: %d \t Pointer to p2: %c\n", ptr->p1, ptr->p2); 

    Pointer2 p2 = {10, 20, NULL};
    Pointer2 p3 = {100, 200, NULL};

    p2.next = &p3;
    Pointer2* x = &p2;
    printf("Pointer p3 members: %d - %d", x->next->mem1, x->next->mem2);
    return 0;
}