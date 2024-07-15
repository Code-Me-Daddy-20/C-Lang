#include <stdio.h>
//struct in C


//sum of complex no.s
/*typedef*/ struct Complex                                          //creating a struct to store multiple variables
{
    double rl;
    double img;
};//cmp;                                                           //(only if you used typedef) giving an alias name to call the struct

int main()
{
    //cmp c1={.rl=80.99,.img=90.99};                               //using the alias name for calling hte struct
    //cmp c2={.rl=22.83,.img=75.83};

    struct Complex c1={.rl=80.99,.img=90.99};                      //calling struct and declaring variables
    struct Complex c2={.rl=22.83,.img=75.83};

    struct Complex sum/*={.rl=c1.rl + c2.rl , .img=c1.img + c2.img}*/;           
    sum.rl = c1.rl + c2.rl;
    sum.img = c1.img + c2.img;

    printf("Result is %.2lf + %.2lfi",sum.rl,sum.img);
}


//------------------------------------------------------------------------------------------------------//


#include <stdio.h>
//struct in C

//product of complex no.s
/*typedef*/ struct Complex                                          //creating a struct to store multiple variables
{
    double rl;
    double img;
};//cmp;                                                           //(only if you used typedef) giving an alias name to call the struct

int main()
{
    //cmp c1={.rl=80.99,.img=90.99};                               //using the alias name for calling hte struct
    //cmp c2={.rl=22.83,.img=75.83};

    struct Complex c1={.rl=80.99,.img=90.99};                      //calling struct and declaring variables
    struct Complex c2={.rl=22.83,.img=75.83};

    struct Complex prod/*={.rl=c1.rl * c2.rl , .img=c1.img * c2.img}*/;           
    prod.rl = c1.rl * c2.rl;
    prod.img = c1.img * c2.img;

    printf("Result is %.2lf + %.2lfi",prod.rl,prod.img);
}

