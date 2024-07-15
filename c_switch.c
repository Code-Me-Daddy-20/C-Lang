#include <stdio.h>

int main()
{
    char ch;int a;int b;
    printf("enter character:");
    scanf("%c",&ch);
    printf("Enter two numbers you want to perform the operations on:");
    scanf("%d %d",&a,&b);
    int v;

    switch(ch)
    {
        case '+':
            v=a+b;
        break;
        case '-':
            v=a-b;
        break;
        case '*':
            v=a*b;
        break;
        case '/':
            v=a/b;
        break;

        default:
        printf("Invalid no.");

        
    }
printf("%d",v);
    
}
