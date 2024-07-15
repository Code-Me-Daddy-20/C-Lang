#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="Hinata";                                          //printing lenght of strings
    char str2[]="Marin";
    printf("String length of str1=%d \nString lenght of str2=%d",strlen(str1),strlen(str2));

    char str3[strlen(str2)];                                        //copying strings(the latter string in parameter will get copied to former string in parameter)
    strcpy(str3,str2);
    printf("\n%s",str3);
    
    strcat(str1,str2);                                              //concatenating strings(strings will get concatenated as in the former string in paremeter)
    printf("\nConcatenated string=%s",str1);

    int cmp=strcmp(str1,str2);                                      //comparing strings(gives 0 when true and nev no. when false)
    printf("\n%d",cmp);

    char str10[]="Sai";
    char str11[]="Anos";

    if(strlen(str10)>strlen(str11))                                 //program_1_
    {
        printf("Greatest string is= %s",str10);
    }
    else
    {
        printf("Greatest string is= %s",str11);
    }
}