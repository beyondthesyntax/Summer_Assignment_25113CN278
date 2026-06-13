#include <stdio.h>

int main() {
    int num,i;
    printf("Enter the nummber of elements in array:");
    scanf("%d", &num);
    int arr[num];

    printf("Enter arrays element:\n");
    for (i = 0; i < num; i++){
        printf("Enter arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    
    for (i = 1; i < num; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf ("The largest element is %d\nThe smallest element is %d", max, min);

    return 0;
}