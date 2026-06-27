#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int size, i, j, sum = 12;

    size = sizeof(arr)/sizeof(arr[0]);

    printf("The pairs with the sum of 12 are:\n");

    for (i=0; i<size; i++){
        for (j=i+1; j<size; j++){
            if (arr[i] + arr[j] == sum){
               printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}