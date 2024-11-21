#include <stdio.h>

int* prodnum(int* p1, int* p2, int* prod); 

int main() {
    int p1, p2 , prod = 1;
    printf("Enter 2 numbers to multiply: ");
    scanf("%d %d", &p1, &p2); 

    int *result = prodnum(&p1, &p2, &prod); 
    printf("The product is %d\n", *result); 

    return 0; 
}

int* prodnum(int* p1, int* p2, int* prod) { 
    *prod = (*p1) * (*p2); 
    return prod;
}