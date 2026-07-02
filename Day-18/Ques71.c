#include <stdio.h>

int main() {
    int num, i, item, found =0, beg, end, mid;
    printf("Enter the nummber of elements in array: ");
    scanf("%d", &num);
    int arr[num];

    printf("Enter the sorted elements of the array :\n");
    for (i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to be search: ");
    scanf("%d", & item);

    beg = 0;
    end = num - 1;
    
    // Binary search
    while(beg<=end){
        mid = (beg + end)/2;
        if(arr[mid] == item){
            found = 1;
            break;
        }
        else if (item > arr[mid]){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    if(found){
        printf("Element %d is found at %d position", item, mid+1);
    }
    else{
        printf("Element not found");
    }
    return 0;
}