#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Character frequencies: \n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c - %d\n", i, freq[i]);
        }
    }

    return 0;
}
