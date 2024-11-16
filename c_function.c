#include <stdio.h>
//returnType func_name()
void square(int s)              //void(return_data_type) used to get output of any data type
{
    int sq=s*s;
    printf("%d  %d\n",s,sq);
}

void sum(int a,int b)
{
    int sum=a+b;
    printf("%d\n",sum);
}

int product(int a,int b)
{                               //return is used when a function is returning a value
    int p=a*b;                  //rather than using print statement inside the function we used return 
    return p;                   //return line is the last line as the cursor exits the function once it is encounterd
}   

int main()
{
    square(5);                  //must give parameters if initialised,here we had print statement inside the function
    sum(5,10);
    int prd=product(10,99);     //return assigned the parameters to the arguments    //data type of return value and func variable storing return value must be same
    printf("product = %d",prd);
}



// built in func- 1. sqrt()      use #include <math.h> file & it is of return type so assign it to print
//                2. main()      first functin in C , every c program must have a main() function