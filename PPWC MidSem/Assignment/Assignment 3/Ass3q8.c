#include <stdio.h>
#include <string.h>

char findFirstRepetitiveChar(const char str[])
{
    int charCount[256] = {0};

    for (int i = 0; i < 256; i++)
    {
        charCount[(int)str[i]]++;

        if (charCount[(int)str[i]] > 1)
            return str[i];
        
    }

    return '\0';
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char result = findFirstRepetitiveChar(str);

    if (result != '\0')
    {
        printf("The first repetitive character in the string \"%s\" is '%c'.\n", str, result);
    }
    else
    {
        printf("There are no repetitive characters in the string \"%s\".\n", str);
    }

    return 0;
}
