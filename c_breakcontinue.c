#include <stdio.h>

int main()
{
    int i;                          //declare the variable outside the loop(global varible)
    printf("Enter a number:");
    scanf("%d",&i);
    while(1)
    if (i>0&&i%2==0)
    {
        printf("no. is even");
        break;
    }
    else
    {
        printf("no.is odd");
        break;
    }
}


