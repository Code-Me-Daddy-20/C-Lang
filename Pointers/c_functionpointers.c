#include <stdio.h>

// int* prodnum(int* p1,int* p2,int* prod);                    // function prototype before main() funcion wint return type int*

int main()
{
    int p1;int p2;int prod=1;
    printf("Enter two numbers to multiply:");
    scanf("%d %d",&p1,&p2);                                 // taking two input **close the inverted quotes after %d** 
    int *res=prodnum(&p1,&p2,&prod);                        // giving location to the pointer variables 
    printf("The product is %d",*res);
}

int* prodnum(int* p1,int* p2,int* prod)                     // prodnum() function - If writing the function after the main function , write function prototype before main() funcion
{
    *prod=*p1 * *p2;
    return prod;
}