#include <stdio.h>
#include <string.h>

int main() {
    char str[100], subStr[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the starting index and length of substring: ");
    scanf("%d %d", &start, &length);

    // Extract the substring
    strncpy(subStr, str + start, length);
    subStr[length] = '\0'; // Null terminate the substring

    printf("Substring: %s\n", subStr);
    return 0;
}
