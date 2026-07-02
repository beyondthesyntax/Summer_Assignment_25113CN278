#include <stdio.h>

int main() {
    int num, i, j, minidx, temp;
    printf("Enter the nummber of elements in array: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the elements of the array :\n");
    for (i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    // Selection sort
    for(i=0; i<num-1; i++){
        minidx = i;
        for(j=i+1; j<num; j++){
            if(arr[minidx] > arr[j]){
                minidx = j;
            }
        }
        temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printf("Array after sorting :\n");
    for(i=0; i<num; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}