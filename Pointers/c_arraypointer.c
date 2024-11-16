#include <stdio.h>
//c arrays as pointers
int main()
{
    int ary1[]={1,5,9,'e',17,};
    for(int i=0;i<sizeof(ary1)/sizeof(ary1[0]);i++)
    {                                                                                                 // *var_name or *array_name access the value of elements
        printf("Value : %d \t Location : %p\n",*(ary1+i)/* ary1[i] */,ary1+i/* &ary1[i] */);          // %p needs &ary_name to give the location or ary_name+index_no of the elements(& sign not needed in array as it is self proclaimed pointers)
    }                                                                                                 // %d needs ary_name[index_no] or *(ary_name+index_no)
    printf("the address of the array is %p",ary1);
}             

int main()                               //program_Q
{
    int ary[]={-34,57,48,97,100};
    int lrgst=*ary;                      // *ary_name gives the value of first element in the array      
    for(int i=0;i<5;i++)                 // for value other elements of the array use *(ary_name+index_no of the element)
    {
        if(lrgst<*(ary+i))               // for n no. of elments un array use strlen() function
            lrgst=*(ary+i);
    }
    printf("Greatest in array is: %d",lrgst);  
}
