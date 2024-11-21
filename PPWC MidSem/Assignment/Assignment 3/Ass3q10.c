#include <stdio.h>
#include <string.h>
#include <math.h>

void binaryToHexadecimal(char binary[]) {
    int length = strlen(binary);
    int hexValue = 0;

    int i = 0;
    while (length % 4 != 0) {
        binary[length++] = '0';
    }

    printf("Hexadecimal equivalent: ");
    for (i = 0; i < length; i += 4) {
        int decimal = 0;
        for (int j = 0; j < 4; j++) {
            decimal += (binary[i + j] - '0') * pow(2, 3 - j);
        }
        if (decimal < 10) {
            printf("%d", decimal);
        } else {
            printf("%c", decimal - 10 + 'A');
        }
    }
    printf("\n");
}

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToHexadecimal(binary);

    return 0;
}
