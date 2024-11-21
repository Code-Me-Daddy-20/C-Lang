#include <stdio.h>
#include <stdbool.h>

bool existsInArray(int element, int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true; 
        }
    }
    return false;
}

void differenceBetweenArrays(int p[], int sizeP, int q[], int sizeQ, int result[], int *resultSize) {
    int tempResultSize = 0; 

    for (int i = 0; i < sizeP; i++) {
        if (!existsInArray(p[i], q, sizeQ)) {
            result[tempResultSize++] = p[i]; 
        }
    }

    *resultSize = tempResultSize;
}

int main() {
    int p[] = {1, 2, 3, 4};
    int q[] = {2, 4, 5, 6};
    int sizeP = sizeof(p) / sizeof(p[0]);
    int sizeQ = sizeof(q) / sizeof(q[0]);

    int result[100]; 
    int resultSize = 0; 

    differenceBetweenArrays(p, sizeP, q, sizeQ, result, &resultSize);

    printf("Difference (p - q): { ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    printf("}\n");

    return 0;
}
