#include <stdio.h>
#include <stdlib.h>
//malloc() and free() functions

int main()
{
    int n=4;
    int* ptr;
    ptr=(int*) malloc(n*sizeof(int));               //syntax of malloc() function   //malloc() provides memory allocations 

    if (ptr==NULL)
    {
        printf("memory not allocated");
    }

    printf("enter values:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);                          //while taking input, use the location variable(&ptr+i or ptr+i)
    }

    printf("Allocated memory:");
    for(int i=0;i<n;i++)
    {
        printf("\n%p",*(ptr+i));                     //to print the location of the variable (%p and (ptr+i))
    }

    n=6;
    ptr=realloc (ptr,n*sizeof(int));                //syntax of realloc()      

    printf("\nNewly allocated memory:");
    for(int i=0;i<n;i++)
    {
        printf("\n%p",(ptr+i));                     
    }


    free(ptr);                                      //to release the pointer dynamically

}



int main()                                          //Qusetion_1
{
    int* ages;
    int n=6;

    ages=(int*) malloc(n*sizeof(int));

    printf("Input values:");
    for (int i=0;i<n;i++)
    {
        scanf("\n%d",ages+i);
    }

    printf("Values:");
    for (int i=0;i<n;i++)
    {
        printf("\n%d",*(ages+i));
    }

    printf("\nAllocated memory:");
    for(int i=0;i<n;i++)
    {
        printf("\n%p",(ages+i));                     
    }

    n=8;
    ages=realloc(ages,n*sizeof(int));
    ages[6]=32;
    ages[7]=50;

    printf("\nValues:");
    for (int i=0;i<n;i++)
    {
        printf("\n%d",*(ages+i));
    }

    printf("\nNewly allocated memory:");
    for(int i=0;i<n;i++)
    {
        printf("\n%p",(ages+i));                     
    }



}


