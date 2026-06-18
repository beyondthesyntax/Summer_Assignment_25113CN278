#include <stdio.h>

int main() {
    int num, i, j;
    printf("Enter the number of element in array:");
    scanf("%d", &num);
    int arr[num];
    
    for (i=0; i<num; i++){
        printf ("Enter arr[%d]:", i);
        scanf("%d", & arr[i]);
    }

    printf("The duplicate elements in array are:");

    for(i=0; i<num; i++){
       for(j=i+1; j<num ; j++){
           if(arr[i] == arr[j]){
              printf("%d ", arr[i]);
              break;
           }
       }
    }
    return 0;
}