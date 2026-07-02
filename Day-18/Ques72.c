#include <stdio.h>

int main() {
    int num, i, j, temp;
    printf("Enter the nummber of elements in array: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the elements of the array :\n");
    for (i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<num-1; i++){
        for(j=0; j<num-1-i; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Array after sorting in descending order :\n");
    for(i=0; i<num; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}