#include    <stdio.h>
#include    <stdlib.h>
#define     MAX 100                      

void inputArray(int arr[], int len) {   
      int i;
      for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);
}

void printArray(int arr[], int len) {   
      int i;
      for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
      printf("\n");
}

void swap(int *a, int *b){
     int temp=*a;
     *a=*b;
     *b=temp;
}

void selectionSort(int arr[MAX], int len){
    int pass=0;
    for(int i=0;i<len-1;i++){
       pass++;
       int min=arr[i],pos=i;
       for(int j=i+1;j<len;j++){
          if(arr[j]<min){
            min=arr[j];
            pos=j;
          }
       }
          swap(&arr[i],&arr[pos]);
          printf("Pass %d: ", pass);
          printArray(arr,len);
    }
 
 }

int main() {
    int arr[MAX], len;
    scanf("%d", &len);                 
    if (len<=0) {
            printf("ERROR: Empty list\n");
            exit(1);
    }
    inputArray( arr, len );             
    selectionSort(arr, len);           
    return 0;
}