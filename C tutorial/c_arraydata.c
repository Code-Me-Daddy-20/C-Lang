#include <stdio.h>
int main()
{
    int i=10;
    double d=10.9970;double x =5.9e4;      //x=5.9x10^4
    float f=10.99;
    char c='s';

    printf("Int is = %d",i);
    printf("\ndouble is = %lf",d);
    printf("\nfloat is = %.3f",f);         //limiting the significant digits after decimal
    printf("\ncharacter is = %c",c);
    printf("\n%d",c);                      //char to int
    printf("\n%lf",x);

    printf("\nSize of int=%zu \nSize of double=%zu",sizeof(i),sizeof(d));    //multiple lines can be printed but should be assigned each time

    int i2;double d2;char c2;
    scanf("\n%d %lf %c",&i2,&d2,&c2);
    printf("Integer=%d \nDouble=%lf \nCharacter=%c",i2,d2,c2);
}




