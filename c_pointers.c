#include <stdio.h>

int main()
{
    int v=54;
    int* ptr=&v;                            //int *ptr is not the right syntax          //int* ptr=&var_name stores the location of the variable
    printf("%p\n",&v);                      //use printf("%p",&var_name) to display memory address         //use printf("%d",*ptr); or usual printf() to display its valu
    printf("%d\n",*ptr);                    //*ptr stores the value         //ptr stores the memory address 

    *ptr=99;
    printf("\n%p\n",&v);
    printf("%d",v);

    double sly;                             //program_2
    printf("Enter your salry:");
    scanf("%lf",&sly);
    double* ptr2=&sly;

    printf("%lf\n",ptr2);
    *ptr2=*ptr2 *2;
    printf("New salary= %lf",sly);

}