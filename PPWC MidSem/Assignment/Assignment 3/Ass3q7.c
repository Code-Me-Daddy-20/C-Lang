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

void copyDistinctElements(int input[], int inputSize, int output[], int *outputSize) {
    int tempOutputSize = 0;

    for (int i = 0; i < inputSize; i++) {
        if (!existsInArray(input[i], output, tempOutputSize)) {
            output[tempOutputSize++] = input[i]; 
        }
    }

    *outputSize = tempOutputSize;
}

int main() {
    int input[] = {4, 7, 7, 3, 2, 5, 5};
    int inputSize = sizeof(input) / sizeof(input[0]);

    int output[100]; 
    int outputSize = 0;

    copyDistinctElements(input, inputSize, output, &outputSize);

    printf("Output array with distinct elements: ");
    for (int i = 0; i < outputSize; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");

    return 0;
}
