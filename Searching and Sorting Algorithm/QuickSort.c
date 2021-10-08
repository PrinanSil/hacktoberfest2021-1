#include<stdio.h>
#include<stdlib.h>
#define max 100
int n, count=1;

void inputArray(int arr[max]){
    for(int i=0;i<n;i++)
       scanf("%d", &arr[i]);
}

void printArray(int arr[max]){
    for(int i=0;i<n;i++)
    printf("%d ", arr[i]);
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

/*
int partition(int arr[max], int lb, int ub){
    int i=lb,j=ub,pivot=ub;
    while(i<j){
        while(arr[i]<arr[pivot])
          i++;
        while(arr[j]>=arr[pivot])                                     //ascending with last element pivot
          j--;
        if(i<j)
          swap(&arr[i],&arr[j]);
    }
    swap(&arr[i],&arr[pivot]);
    return i;
}
*/

/*
int partition(int arr[max], int lb, int ub){
    int i=lb,j=ub,pivot=lb;
    while(i<j){
        while(arr[i]<=arr[pivot])
          i++;
        while(arr[j]>arr[pivot])                                     //ascending with first element pivot
          j--;
        if(i<j)
          swap(&arr[i],&arr[j]);
    }
    swap(&arr[j],&arr[pivot]);
    return j;
}
*/

/*
int partition(int arr[max], int lb, int ub){
    int i=lb,j=ub,pivot=ub;
    while(i<j){
        while(arr[i]>arr[pivot])
          i++;
        while(arr[j]<=arr[pivot])                                   //descending with last element pivot
          j--;
        if(i<j)
          swap(&arr[i],&arr[j]);
    }
    swap(&arr[i],&arr[pivot]);
    return i;
}
*/

/*
int partition(int arr[max], int lb, int ub){
    int i=lb,j=ub,pivot=lb;
    while(i<j){
        while(arr[i]>=arr[pivot])
          i++;
        while(arr[j]<arr[pivot])                                   //descending with first element pivot
          j--;
        if(i<j)
          swap(&arr[i],&arr[j]);
    }
    swap(&arr[j],&arr[pivot]);
    return j;
}
*/

void quickSort(int arr[max], int lb, int ub){
    printf("%d: ",count++);
    printArray(arr);
    printf("\n");
    if(lb<ub){
        int p=partition(arr,lb,ub);
        quickSort(arr,lb,p-1);
        quickSort(arr,p+1,ub);
    }
}

int main(){
    int arr[max];
    scanf("%d", &n);
    if(n<=0){
        printf("ERROR");
        exit(1);
    }
    inputArray(arr);
    printf("Original: ");
    printArray(arr);
    printf("\n");
    quickSort(arr,0,n-1);
    printf("Sorted: ");
    printArray(arr);
    return 0;
}