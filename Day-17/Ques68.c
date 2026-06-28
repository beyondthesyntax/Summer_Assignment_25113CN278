#include <stdio.h>

int main(){
    int n1, n2, i, j, k = 0, found, duplicate;
    
    printf("Enter size of first array:");
    scanf("%d", &n1);

    printf("Enter size of second array:");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], common[n1<n2 ? n1:n2];

    printf("Enter elements of first array:\n");
    for(i=0; i<n1; i++){
        scanf("%d", & arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for(i=0; i<n2; i++){
        scanf("%d", & arr2[i]);
    }

    for(i=0; i<n1; i++){
        found = 0;
        for(j=0; j<n2; j++){
            if (arr1[i] == arr2[j]){
                found = 1;
                break;
            }
        }

        if (found){
            duplicate = 0;
            for(j=0; j<k; j++){
                if(arr1[i] == common[j]){
                    duplicate = 1;
                    break;
                }
            }
            if(!duplicate){
                common[k++] = arr1[i];
            }
        }
    }

    if(k == 0){
        printf("There are no common elements in the arrays");
    }
    else{
        printf("The common elements are:\n");
        for (i=0; i<k; i++){
            printf("%d ", common[i]);
        }
    }
    return 0;
}