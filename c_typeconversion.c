#include <stdio.h>

int main()
{
    int i=22;double d=45.55;char c='y';
    int sum=i+d;
    printf("Sum=%d",sum);      //always use same % data type same as variable data type in the parentheses
    printf("\n%lf",(double)i);

    double div=(int)c/i;
    printf("\n%lf",div);

    double sum2=i+d+(int)c;
    printf("\n%lf",sum2);
}