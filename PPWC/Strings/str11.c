#include <stdio.h>
#include <string.h>

int main() {
    char str[100], subStr[100];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to search: ");
    fgets(subStr, sizeof(subStr), stdin);

    if (strstr(str, subStr)) {
        printf("Substring is present in the string.\n");
    } else {
        printf("Substring is not present in the string.\n");
    }

    return 0;
}
