#include <stdio.h>

int main() {
    int num;
    printf("Enter the nummber of elements in array:");
    scanf("%d", &num);
    int arr[num],i;

    for (i=0; i<num; i++){
        printf("Enter arr[%d]:",i);
        scanf("%d", &arr[i]);
    }

    printf("The array is :\n");
    
    for (i=0; i<num; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}