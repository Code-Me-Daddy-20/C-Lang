#include <stdio.h>
void increment1(void);
void increment2(void);
void increment3(void);
int main(void)
{
    increment1();
    increment1();
    increment1();
    increment2();
    increment2();
    increment2();
    increment3();
    increment3();
    increment3();
}
void increment1(void)
{
    auto int i = 1;
    printf("%d ", i);
    i = i + 1;
    printf("\n");
}
void increment2(void)
{
    static int i = 1;
    printf("%d ", i);
    i = i + 1;
    printf("\n");
}
void increment3(void)
{
    register int i = 1;
    printf("%d ", i);
    i = i + 1;
    printf("\n");
}


