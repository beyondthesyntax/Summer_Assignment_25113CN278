#include <stdio.h>

int main(){
    int n;
    printf("Enter order of the matrix : ");
    scanf("%d", &n);
    
    int i, j, arr1[n][n], arr2[n][n], diff[n][n];
    
    printf("Enter elements of the first matrix :\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second matrix :\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("The result of matrix 1 - matrix 2 is :\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}