#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5, key, j;

    for(int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}