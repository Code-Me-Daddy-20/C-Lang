#include <stdio.h>

int main()
{
    FILE* fptr;                                     //syntax for file pointer
    fptr=fopen("text1.txt","r");                    // to open the file and read it use fopen() and "r"



    char ch[1000];

    if (fptr!=NULL)
    {
        printf("File open successful\n");
        while(fgets(ch,1000,fptr))                  // to get the data stored in the flie use fget()
        {
            printf("File is-\n%s",ch);
        }
    }
    else
    {
        printf("file open unsuccesful");
    }
    fclose(fptr);                                   // to close the file use fclose()
}



int main()                                          //Question_1
{
    FILE* fptr;
    fptr=fopen("text2.txt","w");                    // to open the file in write use foen() and "w"

    fputs("C is fun",fptr);                         // to write in the file use fputs()
    fputs("\nI love using c",fptr);
    

    fclose(fptr);

    fptr=fopen("text2.txt","r");
    char ch[1000];
    if (fptr!=NULL)
    {
        printf("File open successful\n");
        while(fgets(ch,1000,fptr))
        {
            printf("File is-\n%s",ch);
        }
    }
    else
    {
        printf("file open unsuccesful");
    }
    fclose(fptr);
}