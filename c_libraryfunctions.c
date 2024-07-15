#include <stdio.h>
#include <math.h>

int main()
{
double n;
printf("Enter a no.:");
scanf("%lf",&n);                                        //scanf requires '&variable'

printf("Squre root of the no. is: %lf\n",sqrt(n));

printf("Result= %lf",pow(n,sqrt(n)));                   //n**(n**0.5)
}