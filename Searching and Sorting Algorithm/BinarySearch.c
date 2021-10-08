#include <stdio.h>
#include<stdlib.h>
#define max 100
int n;

void inputArray(int arr[max]) {   
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

/*
int BinarySearch(int array[], int lb, int ub, int val){
   while (lb <= ub){
      int middle = (lb+ub)/2;
      if (array[middle] == val)
         return middle;
      if (array[middle] < val)
         lb = middle + 1;
      else
         ub = middle - 1;
   }
   return -1;
}
*/ 

/*
int BinarySearch(int array[], int lb, int ub, int val){
   while (lb <= ub){
      int middle = (lb+ub)/2;
      if (array[middle] == val)
         return middle;
      if (array[middle] > val)
         return BinarySearch(array, lb, middle-1, val);
      else
         return BinarySearch(array, middle+1,ub, val);
   }
   return -1;
}
*/

int main(){
    int array[max],val;
    scanf("%d", &n);
    inputArray(array);
    scanf("%d", &val);
    int index = BinarySearch(array, 0, n-1, val);
    if(index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",index);
   }
   return 0;
}
