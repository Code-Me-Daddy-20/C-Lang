// binarysearch.c
#include <stdio.h>
#define max 20
int binary_search(int[], int, int);
int main()
{
    int len, found, numb, arr[max], i;
    printf("Enter the length of an array: ");
    scanf("%d", &len);
    printf("Enter %d values in sorted order \n", len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);
    printf("Enter the value to search ");
    scanf("%d", &numb);
    found = binary_search(arr, numb, len);
    if (found == numb)
        printf("Value %d is found in the list\n", numb);
    else
        printf("Value %d is not found in the list \n", numb);
    return 0;
}
int binary_search(int arr[], int pnumb, int plen)
{
    int lindex = 0, mid, uindex = plen - 1, nfound;
    while (uindex >= lindex)
    {
        mid = (uindex + lindex) / 2;
        if (pnumb == arr[mid])
        {
            nfound = arr[mid];
            break;
        }
        else
        {
            if (pnumb > arr[mid])
                lindex = mid + 1;
            else
                uindex = mid - 1;
        }
    }
    return (nfound);
}

// #include <stdio.h>
// #include <stdbool.h>

// // Function to implement binary search
// int binarySrch(int arr[], int size, int target) {
//     int bottom = 0;
//     int top = size - 1;
//     bool found = false;

//     while (bottom <= top && !found) {
//        int middle = (bottom + top) / 2; // Calculate the middle index

//         if (arr[middle] == target) {
//             found = true;
//             return middle; // Return the index where the target is found
//         } else if (arr[middle] > target) {
//             top = middle - 1; // Narrow the search range to the left
//         } else {
//             bottom = middle + 1; // Narrow the search range to the right
//         }
//     }

//     return -1; // Return -1 if the target is not found
// }

// int main() {
//     // Example array (sorted)
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 10;

//     // Call binary search
//     int result = binarySrch(arr, size, target);

//     // Output the result
//     if (result != -1) {
//         printf("Element %d found at index %d.\n", target, result);
//     } else {
//         printf("Element %d not found in the array.\n", target);
//     }

//     return 0;
// }
