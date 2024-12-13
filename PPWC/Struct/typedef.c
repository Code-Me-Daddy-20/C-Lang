#include <stdio.h>

typedef struct{
    int a;
    char ch1;
}td_str1;

typedef struct{
    int b;
    char ch2;
}td_str2;

int main(){
    td_str1 st_var1 = {10,'A'};
    td_str2 st_var2 = {100,'B'};
    printf("%d \t %c\n",st_var1.a,st_var1.ch1);
    printf("%d \t %c\n",st_var2.b,st_var2.ch2);
    return 0;
}









































































