#include<stdio.h>

int Bsearch(int arr[], int size, int element){
    int low, high, mid;
    low = 0;
    high = size - 1;
    while(low <= high){
        mid = (low + high);
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 9};
    int size = sizeof(arr)/sizeof(int);
    int element = 2;
    int index = Bsearch(arr, size, element);
    printf("The element found at %d", index+1);
}