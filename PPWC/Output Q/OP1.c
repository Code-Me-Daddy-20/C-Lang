#include <stdio.h>

void reverseString(char* str) {
    char *start = str;              // Pointer to the first character
    char *end = str;                // Pointer to the last character
    while (*end != '\0') {          // Move 'end' to the last character
        end++;
    }
    end--;                          // Step back to the last valid character

    // Swap characters between start and end
    while (start < end) {
        // Swap the characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, World!";  // Example string

    printf("Original string: %s\n", str);

    reverseString(str);            // Reverse the string

    printf("Reversed string: %s\n", str);

    return 0;
}
