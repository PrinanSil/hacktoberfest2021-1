#include <stdio.h>
#include<stdlib.h>
#define max 100
int n;
 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[max]){
   int i, j;
   for (i = 0; i < n; i++)     
        for (j = 0; j < n-i; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void inputArray(int arr[max]){
    for(int i=0;i<n;i++)
       scanf("%d", &arr[i]);
}
 
void printArray(int arr[max]){
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[max];
    scanf("%d", &n);
    inputArray(arr);
    bubbleSort(arr);
    printf("Sorted array: \n");
    printArray(arr);
    return 0;
}