#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string: %s", str);
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase string: %s", str);
    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("%c is uppercase.\n", ch);
    } else {
        printf("%c is not uppercase.\n", ch);
    }

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (islower(ch)) {
        printf("%c is lowercase.\n", ch);
    } else {
        printf("%c is not lowercase.\n", ch);
    }

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    char replacement;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to replace spaces: ");
    scanf("%c", &replacement);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = replacement;
        }
    }

    printf("Modified string: %s", str);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char* word = strtok(str, " ");

    printf("Words in the string: \n");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}
