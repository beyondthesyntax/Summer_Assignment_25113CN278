#include <stdio.h>

int main(){
    int n1, n2, i, j, k=0, found;
    
    printf("Enter size of first array:");
    scanf("%d", &n1);

    printf("Enter size of second array:");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], uni[n1+n2];

    printf("Enter elements of first array:\n");
    for(i=0; i<n1; i++){
        scanf("%d", & arr1[i]);

        // Check if the element is already present in the union array
        found = 0;
        for(j=0; j<k; j++){
            if(arr1[i] == uni[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            uni[k++] = arr1[i];
        }
    }

    printf("Enter elements of second array:\n");
    for(i=0; i<n2; i++){
        scanf("%d", & arr2[i]);

        found = 0;
        for(j=0; j<k; j++){
            if (arr2[i] == uni[j]){
                found = 1;
                break;
            }
        }
        if (!found){
        uni[k++] = arr2[i];
        }
    }
    printf("The union of arrays is:\n");
    for(i=0; i<k; i++){
        printf("%d ", uni[i]);
    }
    return 0;
}