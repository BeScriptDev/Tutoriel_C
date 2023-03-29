#include <stdio.h>

void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

void to_lowercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

void sort_arr(int *arr, int size) {
    int i = 0;
    int tmp = 0;
    while (i < (size - 1)) {
        if (arr[i] > arr[i + 1]) {
            tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
            i = 0;
        } else {
            i++;
        }
    }
}

int main() {
    int arr[5] = {34, -13, 566, -123, 5};
    int size = 5;

    sort_arr(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}