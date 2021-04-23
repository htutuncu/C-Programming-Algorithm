#include <stdio.h>

void selectionSort(int arr[], int start, int end);
int minIndex(int arr[], int start, int end);
void swap(int arr[], int a, int b);

int main()
{
    int i; 
    int arr[] = {5,1,3,2,4};   
    int size = 5;       
        
    printf("\nBefore sortion: \n");     
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, 0, size);

    printf("\nAfter sortion: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

 
void selectionSort(int arr[], int start, int end)
{
    int min;

    if (start < end) {
        min = minIndex(arr, start, end);
        swap(arr, start, min);
        selectionSort(arr, start + 1, end);
    }
}


int minIndex(int arr[], int start, int end)
{
    int i;     
    int min;   

    min = start;
    for (i = start; i < end; i++)
        if (arr[i] < arr[min])
            min = i;

    return min;
}


void swap(int arr[], int a, int b)
{
    int tmp; 

    tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}