#include <stdio.h>
#include "functions.h"

void reverse(int arr[], int n) {
    int temp;
    for (int i = 2; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
