#include <stdio.h>

void call_return_max();
int return_max(int arr[5], int size);

int main() {
    call_return_max();
    return 0;
}

int return_max(int arr[5], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

void call_return_max() {
    int arr[5] = {-43, -324, -123155, -3, -6};
    printf("max -> %d\n", return_max(arr, 5));
}