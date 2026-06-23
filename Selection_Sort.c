#include <stdio.h>

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5, minIndex, temp;

    for(int i = 0; i < n - 1; i++) {
        minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}