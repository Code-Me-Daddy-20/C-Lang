#include <stdio.h>
//c arrays as pointers 
int main()
{
    int ary1[]={1,5,9,'e',17,};
    for(int i=0;i<5;i++)
    {                                                                                                        //*var_name or *array_name access the value of elements
        printf("the value %d is in the location %p\n",ary1[i]/* *(ary1+i) */,ary1+i/* &ary1[i] */);          //%p needs &ary_name to give the location or ary_name+index_no of the elements(& sign not needed in array as it is self proclaimed)
    }                                                                                                        //%d needs ary_name[index_no] or *(ary_name+index_no)
    printf("the position of the array elements are %p",(ary1+3));  
}             

int main1()                                      //program_Q
{
    int ary[]={34,57,48,97,100};
    int lrgst=*ary;                             // *ary_name gives the value of first element in the array      
    for(int i=0;i<*(ary+i);i++)                        //for value other elements of the array use *(ary_name+index_no of the element)
    {
        if(lrgst<*(ary+i))                      //for n no. of elments un array use strlen() function
        {
            lrgst=*(ary+i);
        }
    }
    printf("\nGreatest in array is: %d",lrgst);
}
