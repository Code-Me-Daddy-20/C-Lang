#include <stdio.h>

int main()
{
    //program 1
    int v=54;
    int* ptr=&v;                              //int *ptr is not the right syntax                             //int* ptr=&var_name stores the location of the variable
    printf("value od v: %d\n",v);
    printf("address of v: %p\n",&v);          //use printf("%p",&var_name) to display memory address         //use printf("%d",*ptr); or usual printf() to display its valu
    printf("value in *ptr: %d\n",*ptr);       //*ptr stores the value                                        //ptr stores the memory address 
    printf("address in ptr: %p\n",ptr);
    *ptr=99;                                  // changing the value at the ptr address
    printf("\n%p\n",&v);
    printf("New value of v: %d",v);

    //program_2
    double sly;
    printf("Enter your salary : ");
    scanf("%lf",&sly);
    double* ptr2=&sly;
    printf("Address of sly : %p\n",&sly);
    printf("Address of ptr2 : %p\n",ptr2);
    *ptr2=*ptr2 *2;
    printf("New salary = %lf",sly);
}