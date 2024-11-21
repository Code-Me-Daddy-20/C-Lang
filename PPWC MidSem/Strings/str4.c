#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    printf("Characters in reverse order: \n");
    for (int i = length - 2; i >= 0; i--) { // -2 to exclude '\n' from fgets
        printf("%c\n", str[i]);
    }
    return 0;
}
