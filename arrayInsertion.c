#include<stdio.h>

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}

int Insertion(int arr[],int size,int element,int index){
    if(index>=size){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 0;
    
}

void main(){
    int arr[] = {3, 2, 1, 5, 7};
    int size = 5;
    int element = 56, index = 1;
    display(arr, size);
    Insertion(arr, size, element, index);
    size++;
    display(arr, size);
    
}