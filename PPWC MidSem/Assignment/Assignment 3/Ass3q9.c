#include <stdio.h>
#include <string.h>

void countCharacters(const char str[]) {
    int charCount[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        charCount[(int)str[i]]++;
    }

    printf("The count of each character in the string \"%s\" is:\n", str);
    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("%c-%d, ", (char)i, charCount[i]);
        }
    }
    printf("\b\b \n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    countCharacters(str);

    return 0;
}
