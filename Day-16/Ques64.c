#include <stdio.h>

int main() {
    int arr[] = {1,2,2,3,4,4,5};
    int size, i, j, dup;
    
    size = sizeof(arr)/sizeof(arr[0]);

    printf("Array after removing duplicates:\n");

    for (i=0; i<size; i++) {
        dup = 0;

        for (j=0; j<i; j++) {
            if (arr[i] == arr[j]) {
                dup = 1;
                break;
            }
        }
        if (dup == 0) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}