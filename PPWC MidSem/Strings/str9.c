#include <stdio.h>
#include <string.h>

int main() {
    char str[100][100];
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character

    printf("Enter strings: \n");
    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
    }

    // Sorting the string array
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                char temp[100];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Sorted strings: \n");
    for (int i = 0; i < n; i++) {
        printf("%s", str[i]);
    }
    return 0;
}
