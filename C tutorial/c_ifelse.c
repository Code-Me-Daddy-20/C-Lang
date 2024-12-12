#include <stdio.h>

int main()
{
    int p;
    printf("Enter a no.");
    scanf("%d",&p);
    if(p%2==0)
    {
        printf("Even no.");
    }

    else
    {
        printf("odd no.");
    }
int v=(p%2==0)?p*10:(p%2!=0)?p*2:p*5;
printf("%d",v);
}





