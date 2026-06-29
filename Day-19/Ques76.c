#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the order of the matrix : ");
    scanf("%d", &n);
    int arr[n][n], primarysum = 0, secondarysum=0;

    printf("Enter the elements of the matrix :\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", & arr[i][j]);
        }
    }

    for(i=0; i<n; i++){
        primarysum += arr[i][i];  
        secondarysum += arr[i][n-1-i];
    }
    printf("The sum pf primary diagonal is %d\nThe sum of secondary diagonal is %d", primarysum, secondarysum);
    return 0;
}