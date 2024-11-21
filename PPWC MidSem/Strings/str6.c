#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) alphabets++;
        else if (isdigit(str[i])) digits++;
        else if (!isspace(str[i])) special++;
    }

    printf("Alphabets: %d, Digits: %d, Special characters: %d\n", alphabets, digits, special);
    return 0;
}
