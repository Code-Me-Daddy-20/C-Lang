#include <stdio.h>                              // Q.to print sum of nos. till n
int sum_n(int n); 
int prod_p(int p);                              // 3. call function prototype

int main()                                      // use of this function is to get the value from user and print the result
{
    int n;int p;
    printf("Enter a no.:");                     // 1.input from user
    scanf("%d",&n);
    printf("Enter a no.:");
    scanf("%d",&p);

    int rsum=sum_n(n); 
    int rprod=prod_p(p);                        // 4.call the function and assign to a variable
    printf("Sum of nos.= %d\n",rsum);
    printf("Product of nos.=%d",rprod);

    return 0;
}

int sum_n(int n)                                // 2.sum_n function to print sum of nos. till n
{
    if (n!=0)                                  //use if else,                           
    {                                          //check if n!=0,
        return n+sum_n(n-1);                   //if True->return n+sum_n(n-1),
    }                                          //else ->return 0

    else                                       
    {
        return 0;
    }
}

int prod_p(int p)                             // 2.prod_p function to print product of nos. till p
{
    while (p>0)
    {
        if(p>1)
        {
            return p*prod_p(p-1);
        }
        else
        {
            return 1;
        }
    }
}
