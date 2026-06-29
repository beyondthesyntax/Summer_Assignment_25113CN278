#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter the rows in the matrix : ");
    scanf("%d", &r);
    printf("Enter the coloumns in the matrix : ");
    scanf("%d", &c);

    int arr[r][c], trans[c][r];

    printf("Enter the elements of the matrix :\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", & arr[i][j]);
        }
    }

    //saving transpose in a second array
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            trans[i][j] = arr[j][i];
        }
    }

    printf("The transpose of matrix is:\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}