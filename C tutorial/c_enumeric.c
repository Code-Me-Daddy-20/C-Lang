#include <stdio.h>

enum Day 
{
    Sun,
    Mon,
    Tues,
    Wed,
    Thurs,
    Fri,
    Sat
}weekend1,weekend2;

int main() 
{
    
     weekend1 = Sun;
     weekend2 = Sat;
    
    printf("%d \n%d", weekend1, weekend2);
    
    return 0;
}

