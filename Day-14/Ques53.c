#include <stdio.h>

int main() {
    int num, i, n, pos = -1;
    printf("Enter the nummber of elements in array:");
    scanf("%d", &num);
    int arr[num];

    for (i = 0; i < num; i++){
        printf("Enter arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    printf("The elements of array are: ");
    for(i=0; i<num; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Enter a element to search:");
    scanf("%d", &n);

    for (i = 0; i < num; i++){
        if( n == arr[i]){
            pos = i + 1;
            break;
        }
    }
    if (pos == -1){
        printf("Element is not found");
    }
    else{
        printf("The element found at position %d", pos);
    }
    return 0;
}