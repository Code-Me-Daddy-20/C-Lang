#include <stdio.h>
#include <math.h>

#define sqrt(n) (n^(0.5))

int main()
{
    int n=81;
    double sq=sqrt(n);
    printf("Square root= %lf",sq);
}