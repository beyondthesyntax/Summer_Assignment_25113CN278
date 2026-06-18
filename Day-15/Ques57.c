#include <stdio.h>

int main() {
    int num, i;
    printf("Enter the number of element in array:");
    scanf("%d", &num);
    int arr[num];
    
    for (i=0; i<num; i++){
        printf ("Enter arr[%d]:", i);
        scanf("%d", & arr[i]);
    }

    int l=0, p= num-1, temp;
    while(l<p){
        temp = arr[l];
        arr[l] = arr[p];
        arr[p] = temp;
        
        l++;
        p--;
    }

    printf("The reverse array is:\n");
    for (i=0; i<num; i++){
        printf ("%d ", arr[i]);
    }
    return 0;
}