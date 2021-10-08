#include <stdio.h>
#include<stdlib.h>
#define max 100 
int n;

void inputArray(int arr[max]){
    for(int i=0;i<n;i++)
       scanf("%d", &arr[i]);
}

int Lsearch(int arr[], int val){
    int i;
    for (i = 0; i < n; i++){
        if (arr[i] == val)
            return i;
    }
    return -1;
}

int main(){
    int arr[max],val;
    scanf("%d", &n);
    inputArray(arr);
    scanf("%d", &val);
    int result = Lsearch(arr,val);
    if(result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
    return 0;
}