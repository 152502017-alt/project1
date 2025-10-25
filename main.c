#include <stdio.h>
#include "functions.h"

#define SIZE 5

int main() {
    int arr[SIZE];

    printf("Enter %d elements:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    traverse(arr, SIZE);

    reverse(arr, SIZE);

    printf("Reversed array: ");
    traverse(arr, SIZE);

    return 0;
}
