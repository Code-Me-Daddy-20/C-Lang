#include <stdio.h>
//char stringname[]=" ";
int main()
{
    char str[200];
    printf("Enter your name:");      
    fgets(str,sizeof(str),stdin);                       //rather than scanf() use fgets(str_name,sizeof(str_name),stdin);
    printf("%s",str);

    char str2[]="waifuSupremacy";
    printf("%c",str2[3]);
    printf("%c",str2[1]);

    str2[0]='W';str2[13]='Y';
    printf("\n%s",str2);                                //to print string write the varible name only

}