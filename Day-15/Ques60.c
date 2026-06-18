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

    int j=0;

    for(i=0; i<num; i++){
        if (arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }

    while(j<num){
        arr[j] = 0; 
        j++;
    }

    printf("Array after moving zeroes to end:\n");

    for(i=0;i<num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}