#include    <stdio.h>
#include    <stdlib.h>
#define     MAX 20                      
void inputArray(int arr[], int len) {   
    int i;
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int len) {   
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insSort(int arr[MAX], int len){
     int key,j,pass=1;
     for(int i=1;i<len;i++){
         key=arr[i];
         j=i-1;
         while(j>=0 && arr[j]>key){
              arr[j+1]=arr[j];
              j=j-1;
          }
          arr[j+1]=key;
          printf("Pass %d: ",pass++);
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
    insSort(arr, len);                  
    return 0;
}

