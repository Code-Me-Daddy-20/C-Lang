#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    // Copying string
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; // Null-terminate the copied string

    printf("Copied string: %s", str2);
    printf("Number of characters copied: %d\n", i);
    return 0;
}
