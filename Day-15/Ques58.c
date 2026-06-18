#include <stdio.h>

int main() {
    int num, i, pos;
    printf("Enter the number of element in array:");
    scanf("%d", &num);
    int arr[num];
    
    for (i=0; i<num; i++){
        printf ("Enter arr[%d]:", i);
        scanf("%d", & arr[i]);
    }

    printf("Left rotate an array by which position:");
    scanf("%d", &pos);

    pos %= num;

    int temp[pos];

    for(i=0; i<pos; i++){
        temp[i] = arr[i];
    }

    for(i=pos; i<num; i++){
        arr[i-pos] = arr[i];
    }

    for(i=0; i<pos; i++){
        arr[num-pos+i] = temp[i];
    }

    printf("Array after left rotate by %d position is:\n", pos);

    for(i=0;i<num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}