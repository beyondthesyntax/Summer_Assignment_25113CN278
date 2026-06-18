#include <stdio.h>

int main() {
    int num, i, element, count=0;
    printf("Enter the number of element in array:");
    scanf("%d", &num);
    int arr[num];
    
    for (i=0; i<num; i++){
        printf ("Enter arr[%d]:", i);
        scanf("%d", & arr[i]);
    }

    printf("Enter the element to find frequency:");
    scanf("%d", & element);

    for(i=0; i<num; i++){
        if(arr[i] == element){
            count++;
        }
    }

    printf("The frequency of element %d is %d", element, count);
    return 0;
}